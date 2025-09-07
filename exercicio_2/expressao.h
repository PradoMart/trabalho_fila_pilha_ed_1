#ifndef EXPRESSAO_H_INCLUDED
#define EXPRESSAO_H_INCLUDED

/**
 * @brief Valida os escopos de uma expressão matemática.
 * @param exp A string da expressão infixa.
 * @return Retorna 1 se válida, 0 caso contrário.
 */
int valida_escopo(char *exp);

/**
 * @brief Converte uma expressão infixa para pós-fixa.
 * @param infixa A string da expressão infixa.
 * @param posfixa Ponteiro para a string que armazenará a expressão pós-fixa.
 * @return Retorna 1 em caso de sucesso, 0 em caso de erro.
 */
int infixa_para_posfixa(char *infixa, char *posfixa);

/**
 * @brief Avalia uma expressão pós-fixa.
 * @param posfixa A string da expressão pós-fixa.
 * @param resultado Ponteiro para a variável que armazenará o resultado.
 * @return Retorna 1 em caso de sucesso, 0 em caso de erro.
 */
int avalia_posfixa(char *posfixa, float *resultado);

#endif // EXPRESSAO_H_INCLUDED
