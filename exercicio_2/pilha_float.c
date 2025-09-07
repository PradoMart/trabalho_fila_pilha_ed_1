#include <stdlib.h>
#include "pilha_float.h"

/*
CRIA_PILHA_FLOAT()
entrada: Nenhuma.
pre-condicao: Nenhuma.
processo: Retorna um ponteiro nulo, que representa uma pilha vazia.
saida: Retorna uma PilhaFloat vazia (NULL).
pos-condicao: Nenhuma.
*/
PilhaFloat cria_pilha_float() {
    return NULL;
}

/*
PILHA_FLOAT_VAZIA()
entrada: Uma PilhaFloat 'p'.
pre-condicao: Nenhuma.
processo: Verifica se o ponteiro da pilha é nulo.
saida: Retorna 1 se a pilha for vazia, 0 caso contrário.
pos-condicao: Nenhuma.
*/
int pilha_float_vazia(PilhaFloat p) {
    return (p == NULL);
}

/*
PUSH_FLOAT()
entrada: O endereço da PilhaFloat e o float a ser inserido.
pre-condicao: Nenhuma.
processo: Aloca um novo nó, preenche com o valor, e o posiciona no topo
          da pilha, fazendo o ponteiro de topo apontar para ele.
saida: Retorna 1 para sucesso, 0 para falha de alocação.
pos-condicao: O valor 'elem' é o novo elemento do topo da pilha.
*/
int push_float(PilhaFloat *p, float elem) {
    PilhaFloat N = (PilhaFloat) malloc(sizeof(struct no_float));
    if (N == NULL) {
        return 0;
    }
    N->info = elem;
    N->prox = *p;
    *p = N;
    return 1;
}

/*
POP_FLOAT()
entrada: O endereço da PilhaFloat e um ponteiro para float para retorno do valor.
pre-condicao: A pilha não pode estar vazia.
processo: Remove o nó do topo da pilha, retorna seu valor através do ponteiro
          'elem', libera a memória alocada pelo nó e atualiza o topo da pilha.
saida: Retorna 1 em caso de sucesso, 0 se a pilha estiver vazia.
pos-condicao: O elemento do topo é removido e a pilha contém um elemento a menos.
*/
int pop_float(PilhaFloat *p, float *elem) {
    if (pilha_float_vazia(*p)) {
        return 0;
    }
    PilhaFloat aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);
    return 1;
}

/*
APAGA_PILHA_FLOAT()
entrada: O endereço da PilhaFloat.
pre-condicao: Nenhuma.
processo: Usa a função pop_float() repetidamente para remover e liberar todos
          os nós da pilha até que ela se torne vazia.
saida: Retorna 1 em caso de sucesso.
pos-condicao: A pilha se torna vazia e toda a memória de seus nós é liberada.
*/
int apaga_pilha_float(PilhaFloat *p) {
    while (!pilha_float_vazia(*p)) {
        float elem;
        pop_float(p, &elem);
    }
    return 1;
}
