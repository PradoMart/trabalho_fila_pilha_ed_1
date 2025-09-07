#ifndef PILHA_CHAR_H_INCLUDED
#define PILHA_CHAR_H_INCLUDED

/**
 * @brief Estrutura do nó da pilha de caracteres.
 * Cada nó contém um caractere (info) e um ponteiro para o próximo nó (prox).
 */
struct no_char {
    char info;
    struct no_char *prox;
};

/**
 * @brief Definição do tipo PilhaChar como um ponteiro para o nó do topo.
 * Uma pilha vazia é representada por um ponteiro NULL.
 */
typedef struct no_char *PilhaChar;

// --- Protótipos das Operações do TAD ---

/**
 * @brief Cria uma instância de uma pilha vazia.
 * @return Retorna NULL, representando uma pilha vazia.
 */
PilhaChar cria_pilha_char();

/**
 * @brief Verifica se a pilha está vazia.
 * @param p A pilha a ser verificada.
 * @return Retorna 1 se a pilha estiver vazia, 0 caso contrário.
 */
int pilha_char_vazia(PilhaChar p);

/**
 * @brief Insere um caractere no topo da pilha (push).
 * @param p Ponteiro para a pilha onde o elemento será inserido.
 * @param elem O caractere a ser inserido.
 * @return Retorna 1 em caso de sucesso, 0 em caso de falha de alocação.
 */
int push_char(PilhaChar *p, char elem);

/**
 * @brief Remove um caractere do topo da pilha (pop).
 * @param p Ponteiro para a pilha da qual o elemento será removido.
 * @param elem Ponteiro para a variável que armazenará o caractere removido.
 * @return Retorna 1 se a pilha não estiver vazia, 0 caso contrário.
 */
int pop_char(PilhaChar *p, char *elem);

/**
 * @brief Obtém o caractere no topo da pilha sem removê-lo (peek).
 * @param p A pilha a ser consultada.
 * @param elem Ponteiro para a variável que armazenará o caractere do topo.
 * @return Retorna 1 se a pilha não estiver vazia, 0 caso contrário.
 */
int le_topo_char(PilhaChar p, char *elem);

/**
 * @brief Apaga todos os elementos da pilha, liberando a memória alocada.
 * @param p Ponteiro para a pilha a ser apagada.
 * @return Retorna 1 em caso de sucesso.
 */
int apaga_pilha_char(PilhaChar *p);

#endif // PILHA_CHAR_H_INCLUDED
