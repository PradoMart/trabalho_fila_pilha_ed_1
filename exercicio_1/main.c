#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int menu(){
    int escolha;
    printf("---------------CONVERSOR DE BASES---------------\n");
    printf("1. Binario\n");
    printf("2. Octal\n");
    printf("3. Hexadecimal\n");
    printf("4. Digite um numero negativo para sair.\n");
    printf("Escolha : ");
    scanf("%d", &escolha);
    return escolha;
}

void converter_binario(Pilha p, int numero){
    int resto;
    while(numero > 0){
        resto = numero % 2;
        insere_topo(p, resto);
        numero /= 2;
    }
    printf("Binario: ");
    while(pilha_vazia(p) == 0){
        remove_topo(p, &resto);
        printf("%d", resto);
    }
    printf("\n");
}

void converter_octal(Pilha p, int numero){
    int resto;
    while(numero > 0){
        resto = numero % 8;
        insere_topo(p, resto);
        numero /= 8;
    }
    printf("Octal: ");
    while(pilha_vazia(p) == 0){
        remove_topo(p, &resto);
        printf("%d", resto);
    }
    printf("\n");
}

void converter_hexadecimal(Pilha p, int numero){
    int resto;
    while(numero > 0){
        resto = numero % 16;
        insere_topo(p, resto);
        numero /= 16;
    }
    printf("Hexadecimal: ");
    while(pilha_vazia(p) == 0){
        remove_topo(p, &resto);
        if(resto < 10)
            printf("%d", resto);
        else
            printf("%c", 'A' + (resto - 10));
    }
    printf("\n");
}


int pegar_numero(){
    int numero;
    printf("Digite o numero para conversao: ");
    scanf("%d", &numero);
    if(numero < 0){
        printf("O numero deve ser positivo.\n");
        return -1;
    }
    return numero;
}

int main()
{
    int escolha, numero;
    Pilha p = cria_pilha();
    do{
        escolha = menu();
        if(escolha == 4) break;

        numero = pegar_numero();
        if(numero < 0) continue;

        switch(escolha){
            case 1:
                converter_binario(p, numero);
                break;
            case 2:
                converter_octal(p, numero);
                break;
            case 3:
                converter_hexadecimal(p, numero);
                break;
            default:
                printf("Opcao invalida.\n");
        }
        esvazia_pilha(p);

    }while(escolha != 4);
    apaga_pilha(&p);

    return 0;
}
