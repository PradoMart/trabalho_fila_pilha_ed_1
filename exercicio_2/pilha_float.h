#ifndef PILHA_FLOAT_H_INCLUDED
#define PILHA_FLOAT_H_INCLUDED

/**
 * @brief Estrutura do nó da pilha de floats.
 */
struct no_float {
    float info;
    struct no_float *prox;
};

/**
 * @brief Definição do tipo PilhaFloat como um ponteiro para o nó do topo.
 */
typedef struct no_float *PilhaFloat;

// --- Protótipos das Operações do TAD ---

/**
 * @brief Cria uma instância de uma pilha vazia.
 * @return Retorna NULL.
 */
PilhaFloat cria_pilha_float();

/**
 * @brief Verifica se a pilha está vazia.
 * @param p A pilha a ser verificada.
 * @return Retorna 1 se a pilha estiver vazia, 0 caso contrário.
 */
int pilha_float_vazia(PilhaFloat p);

/**
 * @brief Insere um float no topo da pilha (push).
 * @param p Ponteiro para a pilha.
 * @param elem O float a ser inserido.
 * @return Retorna 1 em caso de sucesso, 0 em caso de falha.
 */
int push_float(PilhaFloat *p, float elem);

/**
 * @brief Remove um float do topo da pilha (pop).
 * @param p Ponteiro para a pilha.
 * @param elem Ponteiro para a variável que armazenará o float removido.
 * @return Retorna 1 se a pilha não estiver vazia, 0 caso contrário.
 */
int pop_float(PilhaFloat *p, float *elem);

/**
 * @brief Apaga todos os elementos da pilha.
 * @param p Ponteiro para a pilha a ser apagada.
 * @return Retorna 1 em caso de sucesso.
 */
int apaga_pilha_float(PilhaFloat *p);

#endif // PILHA_FLOAT_H_INCLUDED
