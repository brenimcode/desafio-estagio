#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Valores em reais
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    // Calcula o total
    double total = sp + rj + mg + es + outros;

    // Calcula as porcentagens
    double pct_sp = (sp / total) * 100;
    double pct_rj = (rj / total) * 100;
    double pct_mg = (mg / total) * 100;
    double pct_es = (es / total) * 100;
    double pct_outros = (outros / total) * 100;

    // Exibe os resultados
    cout << fixed << setprecision(2); // Define a precisão de casas decimais para 2
    cout << "Porcentagem de SP: " << pct_sp << "%" << endl;
    cout << "Porcentagem de RJ: " << pct_rj << "%" << endl;
    cout << "Porcentagem de MG: " << pct_mg << "%" << endl;
    cout << "Porcentagem de ES: " << pct_es << "%" << endl;
    cout << "Porcentagem de Outros: " << pct_outros << "%" << endl;

    return 0;
}
