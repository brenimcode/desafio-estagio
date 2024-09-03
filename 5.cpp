#include <iostream>
#include <string>

using namespace std;

int main() {
    // Lê a string de entrada
    string inputString;
    getline(cin, inputString);
    
    // Inicializa uma string vazia para armazenar o resultado invertido
    string reversedString = "";

    // Obtém o tamanho da string de entrada
    int inputLength = (int)inputString.size();

    // Itera sobre a string de entrada de trás para frente
    for (int i = inputLength - 1; i >= 0; i--) {
        // Adiciona cada caractere à string invertida
        reversedString += inputString[i];
    }

    // Imprime a string invertida
    cout << reversedString << endl;

    return 0;
}
