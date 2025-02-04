# Desafio Técnico - Vaga de Estágio

Este repositório contém as soluções para uma série de problemas técnicos. Feitos em C++. Abaixo, estão as descrições de cada problema.

## Questões

### 1. Soma de Números

**Descrição:**

Observe o trecho de código abaixo:
```c
int INDICE = 13, SOMA = 0, K = 0;
Enquanto K < INDICE faça {
    K = K + 1;
    SOMA = SOMA + K;
}
Imprimir(SOMA);
```
Ao final do processamento, qual será o valor da variável `SOMA`?


### 2. Sequência de Fibonacci

**Descrição:**

Dada a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não à sequência.


### 3. Faturamento Diário

**Descrição:**

Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa que calcule e retorne:
- O menor valor de faturamento ocorrido em um dia do mês;
- O maior valor de faturamento ocorrido em um dia do mês;
- Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

**IMPORTANTE:**
- a) Usar JSON ou XML disponível como fonte dos dados do faturamento mensal;
- b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média.


### 4. Faturamento Mensal por Estado

**Descrição:**

Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

- **SP:** R$67.836,43
- **RJ:** R$36.678,66
- **MG:** R$29.229,88
- **ES:** R$27.165,48
- **Outros:** R$19.849,53

Escreva um programa onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.

### 5. Inversão de String

**Descrição:**

Escreva um programa que inverta os caracteres de uma string.

**IMPORTANTE:**
- a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
- b) Evite usar funções prontas, como, por exemplo, `reverse`.


## Estrutura do Repositório

- `1` - Código para o problema de soma de números.
- `2` - Código para verificar a presença de um número na sequência de Fibonacci.
- `3` - Código para análise de faturamento diário com JSON.
- `4` - Código para calcular a porcentagem de faturamento por estado.
- `5` - Código para inverter uma string.

Cada diretório contém o código-fonte e, em alguns casos, exemplos de entrada e saída.

## Como Executar

Para compilar e executar os programas, siga os seguintes passos:

1. **Clone o Repositório:**
   ```bash
   git clone <URL do repositório>
   ```

2. **Navegue até o Diretório Desejado:**
   ```bash
   cd <diretório do problema>
   ```

3. **Compile e Execute o Programa:**
   - Para C++:
     ```bash
     g++ -o nome_programa nome_arquivo.cpp
     ./nome_programa
     ```

   - Para outras linguagens, siga os comandos apropriados.
