#include <iostream>

using namespace std;

int main() {
    int aux, idade, anos, meses, dias;
    cin >> idade;
    anos = idade/365;
    aux = idade%365;
    meses = aux/30;
    aux = aux%30;
    cout <<
        anos << " ano(s)" << endl <<
        meses << " mes(es)" << endl <<
        aux << " dia(s)" << endl;
}