#include<iostream>

using namespace std;

int main() {
    int duracao, h, m, aux;
    cin >> duracao;
    h = duracao / 3600;
    aux = duracao % 3600;
    m = aux / 60;
    aux = aux % 60;
    cout << h << ":" << m << ":" << aux << endl;
}