#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp> // Incluir a biblioteca JSON

using json = nlohmann::json;
using namespace std;

int main() {
    // Ler o arquivo JSON
    ifstream file("faturamento.json");
    json j;
    file >> j;

    // Extraindo o vetor de faturamento do JSON
    vector<int> faturamento = j["faturamento"];

    int tamanho = faturamento.size();
    int menor = faturamento[0], maior = faturamento[0];
    int somaTotal = 0;

    // Processamento dos dados
    for(int i = 1; i < tamanho; i++) {
        if(menor > faturamento[i]) menor = faturamento[i];
        if(maior < faturamento[i]) maior = faturamento[i];
        if(faturamento[i] != 0) somaTotal += faturamento[i];
    }

    // Calculando a média mensal
    int mediaMensal = somaTotal / tamanho;
    int numeroDias = 0;
    for(int i = 1; i < tamanho; i++) {
        if(faturamento[i] > mediaMensal) {
            numeroDias++;
        }
    }

    // Exibindo os resultados
    cout << "Menor faturamento: " << menor << endl;
    cout << "Maior faturamento: " << maior << endl;
    cout << "Número de dias em que o valor de faturamento diário foi superior à média mensal: " << numeroDias << endl;

    return 0;
}
