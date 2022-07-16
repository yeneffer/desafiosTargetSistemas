#include <iostream>

using namespace std;

int main()
{
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;
    float soma = sp + rj + mg + es + outros;
    float spPorcentagem = (sp * 100) / soma;
    float rjPorcentagem = (rj * 100) / soma;
    float mgPorcentagem = (mg * 100) / soma;
    float esPorcentagem = (es * 100) / soma;
    float outrosPorcentagem = (outros * 100) / soma;

    cout << "Porcentagem de SP: " << spPorcentagem << endl;
    cout << "Porcentagem de RJ: " << rjPorcentagem << endl;
    cout << "Porcentagem de MG: " << mgPorcentagem << endl;
    cout << "Porcentagem de ES: " << esPorcentagem << endl;
    cout << "Porcentagem de Outros: " << outrosPorcentagem << endl;

    return 0;
}
