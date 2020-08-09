#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nome;
    double salario, vendas;
    cin >> nome >> salario >> vendas;
    cout << "TOTAL = R$ " << setprecision(2) << fixed << (((15.0/100.0)*vendas)+salario) << endl;

}