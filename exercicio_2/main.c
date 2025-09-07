#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "expressao.h"

#define MAX_EXP 100

int main() {
    char expressao_infixa[MAX_EXP];
    char expressao_posfixa[MAX_EXP];
    float resultado;

    printf("--- AVALIADOR DE EXPRESSOES MATEMATICAS ---\n");
    printf("Operandos permitidos: A a F\n");
    printf("Operadores: +, -, *, /, ^\n");
    printf("Delimitadores: (), [], {}\n");
    printf("Digite 'FIM' para encerrar.\n");

    do {
        printf("\nDigite uma expressao infixa: ");
        fgets(expressao_infixa, MAX_EXP, stdin);
        expressao_infixa[strcspn(expressao_infixa, "\n")] = 0; // Remove o \n

        if (strcmp(expressao_infixa, "FIM") == 0) {
            break;
        }

        // FASE 1: Validação de Escopo
        if (!valida_escopo(expressao_infixa)) {
            printf("Por favor, digite uma nova expressao valida.\n");
            continue;
        }
        printf("SUCESSO: Escopos validados com sucesso.\n");

        // FASE 2: Conversão para Pós-fixa
        if (!infixa_para_posfixa(expressao_infixa, expressao_posfixa)) {
            printf("Por favor, digite uma nova expressao valida.\n");
            continue;
        }
        printf("Expressao pos-fixa: %s\n", expressao_posfixa);

        // FASE 3: Avaliação da Expressão
        if (!avalia_posfixa(expressao_posfixa, &resultado)) {
             printf("Por favor, digite uma nova expressao valida.\n");
            continue;
        }
        printf("=====================================\n");
        printf("Resultado da expressao: %.2f\n", resultado);
        printf("=====================================\n");

    } while (1);

    printf("\nEncerrando o programa...\n");

    return 0;
}
