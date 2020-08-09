#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo1, codigo2, peca1, peca2;
    double valor1, valor2;
    cin >> codigo1 >> peca1 >> valor1;
    cin >> codigo2 >> peca2 >> valor2;
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << ((peca1 * valor1) + (peca2 * valor2)) << endl;
}