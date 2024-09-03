#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define MAX_FIB_INDEX 104

// Descrição: O programa recebe um valor 'k' do usuário e verifica se esse número
// pertence à sequência de Fibonacci. O valor máximo permitido para 'k' é 104,
// para garantir que o programa rode em tempo hábil (1s).

// Vetor para armazenar os valores da sequência de Fibonacci utilizando Programação Dinâmica.
vector<int> fibonacci(MAX_FIB_INDEX + 1, -1);

// Função para calcular o n-ésimo termo da sequência de Fibonacci usando Programação Dinâmica.
int calculateFibonacci(int n) {
    // Retorna o valor já calculado se ele estiver armazenado.
    if (fibonacci[n] != -1) return fibonacci[n];
    
    // Calcula e armazena o valor de Fibonacci para o índice 'n'.
    return fibonacci[n] = calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
}

// Função para verificar se o número 'k' pertence à sequência de Fibonacci.
bool isInFibonacciSequence(int k) {
    for (int i = 0; i <= MAX_FIB_INDEX; i++) {
        if (k < fibonacci[i]) {
            return false; // Se 'k' for menor que o termo atual de Fibonacci, não pertence à sequência.
        }
        if (k == fibonacci[i]) {
            return true; // Se 'k' for igual ao termo atual de Fibonacci, pertence à sequência.
        }
    }
    return false;
}

int32_t main() {
    int k;
    cout << "Informe um numero para verificar se ele pertence a sequencia de Fibonacci: ";
    cin >> k;

    // Inicializa os casos base da sequência de Fibonacci.
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    fibonacci[2] = 2;

    // Calcula todos os valores de Fibonacci até o índice máximo permitido.
    calculateFibonacci(MAX_FIB_INDEX);

    // Verifica se o número informado 'k' pertence à sequência de Fibonacci.
    if (isInFibonacciSequence(k)) {
        cout << "O numero " << k << " pertence a sequencia de Fibonacci." << endl;
    } else {
        cout << "O numero " << k << " nao pertence a sequencia de Fibonacci." << endl;
    }

    return 0;
}
