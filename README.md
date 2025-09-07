# Trabalho de Algoritmos e Estrutura de Dados 1 👨‍💻

## 📝 Sobre o Projeto

Este repositório contém a solução para o segundo trabalho prático da disciplina de **Algoritmos e Estrutura de Dados 1**. O objetivo foi aplicar o conhecimento em estruturas de dados lineares (Pilhas e Filas) para resolver quatro problemas distintos, cada um com seus próprios requisitos e desafios.

---

## ✨ Funcionalidades Implementadas

Cada questão do trabalho foi desenvolvida como um módulo independente:

### 🔢 Questão 1: Conversor de Bases Numéricas
- **Descrição:** Um programa que converte um número inteiro positivo para as bases Binária, Octal ou Hexadecimal, conforme a escolha do usuário.
- **Estrutura de Dados:** `Pilha Estática/Sequencial`.

### 🧠 Questão 2: Avaliador de Expressões Matemáticas
- **Descrição:** Uma calculadora completa que recebe uma expressão matemática (infixa) e realiza um processo de três fases:
  1.  **Validação de Escopo:** Verifica o uso correto e aninhamento de `()`, `[]` e `{}` com regras de precedência.
  2.  **Conversão:** Transforma a expressão de infixa para pós-fixa.
  3.  **Avaliação:** Calcula o resultado final da expressão, solicitando os valores das variáveis ao usuário.
- **Estruturas de Dados:** Duas `Pilhas Dinâmicas/Encadeadas` (uma para `char`, outra para `float`).

### 🚗 Questão 3: Simulador de Estacionamento
- **Descrição:** Um sistema que gerencia a entrada e saída de veículos em um estacionamento com 3 boxes (filas). O programa otimiza a alocação de vagas e lida com a manobra de carros para a retirada.
- **Estrutura de Dados:** `Fila Estática/Sequencial`.

### 🏥 Questão 4: Fila de Prioridade Hospitalar
- **Descrição:** Um sistema para gerenciar uma fila de pacientes em um hospital, onde a inserção é ordenada pela gravidade da doença (de 1, mais grave, a 5, menos grave).
- **Estrutura de Dados:** `Fila de Prioridade Ascendente` com alocação dinâmica, circular e ordenada.

---

## 🧑‍💻 Autores

O trabalho foi dividido entre a equipe da seguinte forma:

- **Leandro:** Questão 2 (Avaliador de Expressões Matemáticas)
- **Murilo:** Questão 4 (Fila de Prioridade Hospitalar)
- **Iury:** Questão 1 (Conversor de Bases) e Questão 3 (Simulador de Estacionamento)

---

## 🚀 Como Compilar e Executar

Cada questão está em sua própria pasta (`questao1/`, `questao2/`, etc.). Para compilar e executar, siga os passos:

1.  **Navegue até a pasta da questão desejada:**
    ```bash
    cd questaoX  # Substitua X pelo número da questão (1, 2, 3 ou 4)
    ```

2.  **Compile os arquivos de código-fonte:**
    ```bash
    # Para as questões 1, 3 e 4
    gcc *.c -o programa

    # Para a Questão 2 (necessita da biblioteca de matemática -lm)
    gcc *.c -o programa -lm
    ```

3.  **Execute o programa:**
    ```bash
    ./programa
    ```

---

## 🛠️ Tecnologias Utilizadas
- Linguagem C
- Compilador GCC
- Pilhas (Estáticas e Dinâmicas)
- Filas (Estáticas e de Prioridade)

---

## 📚 Informações da Disciplina
- **Universidade:** Universidade Federal de Uberlândia
- **Disciplina:** Algoritmos e Estrutura de Dados 1
- **Professor:** Luiz Gustavo Almeida Martins
