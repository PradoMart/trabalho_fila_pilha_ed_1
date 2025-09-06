#include <stdio.h>
#include <stdlib.h>
#include "tad.h">
#define MAX 10

struct pilha {
    int vetor_inteiro[MAX];
    int topo;
};

/*
    Entrada: não possui.
    Pré-condição: não possui.
    Processo: aloca dinamicamente uma pilha e inicializa seu topo como -1.
    Saída: retorna a referência para a pilha criada ou NULL se falhar.
    Pós-condição: pilha inicializada e pronta para uso.
*/
Pilha cria_pilha(){
    Pilha p = (Pilha) malloc(sizeof(struct pilha));
    if(p != NULL){
        p->topo = -1;
    }
    return p;
};

/*
    Entrada: uma pilha.
    Pré-condição: pilha deve ter sido criada.
    Processo: verifica se o índice do topo está na última posição.
    Saída: retorna 1 se cheia, 0 caso contrário.
    Pós-condição: não altera a pilha.
*/
int pilha_cheia(Pilha p){
    if(p != NULL && p->topo == MAX - 1){
        return 1;
    }
    return 0;
}

/*
    Entrada: uma pilha.
    Pré-condição: pilha deve ter sido criada.
    Processo: verifica se o topo está em -1.
    Saída: retorna 1 se vazia, 0 caso contrário.
    Pós-condição: não altera a pilha.
*/
int pilha_vazia(Pilha p){
    if(p != NULL && p->topo == -1){
        return 1;
    }
    return 0;
}

/*
    Entrada: pilha e ponteiro para inteiro.
    Pré-condição: pilha deve ter sido criada e não estar vazia.
    Processo: acessa o valor armazenado no topo.
    Saída: retorna 1 se conseguiu obter o valor, 0 caso contrário.
    Pós-condição: não altera a pilha.
*/
int get_topo(Pilha p, int *topo){
    if(p == NULL || pilha_vazia(p) == 1){
        return 0;
    }
    *topo = p->vetor_inteiro[p->topo];
    return 1;
}

/*
    Entrada: pilha e elemento inteiro.
    Pré-condição: pilha deve ter sido criada e não estar cheia.
    Processo: incrementa o topo e armazena o elemento na nova posição.
    Saída: retorna 1 em caso de sucesso, 0 caso contrário.
    Pós-condição: elemento fica no topo da pilha.
*/
int insere_topo(Pilha p, int elemento){
    if(p == NULL || pilha_cheia(p) == 1){
        return 0;
    }
    p->topo++;
    p->vetor_inteiro[p->topo] = elemento;
    return 1;
}

/*
    Entrada: pilha e ponteiro para inteiro.
    Pré-condição: pilha deve ter sido criada e não estar vazia.
    Processo: copia o valor do topo e decrementa o índice do topo.
    Saída: retorna 1 em caso de sucesso, 0 caso contrário.
    Pós-condição: elemento removido da pilha e devolvido via ponteiro.
*/
int remove_topo(Pilha p, int *devolver_elemento){
    if(p == NULL || pilha_vazia(p) == 1){
        return 0;
    }
    *devolver_elemento = p->vetor_inteiro[p->topo];
    p->topo--;
    return 0;
}

/*
    Entrada: pilha.
    Pré-condição: pilha deve ter sido criada.
    Processo: define o topo como -1.
    Saída: retorna 1 em caso de sucesso, 0 caso contrário.
    Pós-condição: pilha fica vazia.
*/
int esvazia_pilha(Pilha p){
    if(p == NULL || pilha_vazia(p) == 1){
        return 0;
    }
    p->topo = -1;
    return 0;
}

/*
    Entrada: referência para ponteiro de pilha.
    Pré-condição: pilha deve ter sido criada.
    Processo: libera a memória alocada e coloca ponteiro como NULL.
    Saída: retorna 1 em caso de sucesso, 0 caso contrário.
    Pós-condição: pilha deixa de existir e não pode mais ser usada.
*/
int apaga_pilha(Pilha *p){
    if(p == NULL){
        return 0;
    }
    free(*p);
    *p = NULL;
    return 1;
}





