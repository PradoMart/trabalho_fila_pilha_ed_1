#ifndef FILA_ESTATICA_H
#define FILA_ESTATICA_H_

typedef struct pilha * Pilha;
Pilha cria_pilha();
int pilha_cheia(Pilha);
int pilha_vazia(Pilha);

int get_topo(Pilha, int *);
int insere_topo(Pilha, int);
int remove_topo(Pilha, int *);

int esvazia_pilha(Pilha);
int apaga_pilha(Pilha *);

#endif // FILA_ESTATICA_H
