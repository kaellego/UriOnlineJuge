#include <iostream>

using namespace std;

int main() {
    int n, aux, n100, n50, n20, n10, n5, n2, n1;
    cin >> n;
    n100 = n/100;
    aux = n%100;
    n50 = aux/50;
    aux =  aux%50;
    n20 = aux/20;
    aux = aux%20;
    n10 = aux/10;
    aux = aux%10;
    n5 = aux/5;
    aux = aux%5;
    n2 = aux/2;
    aux = aux%2;
    n1 = aux/1;
    aux = aux%1;
    cout <<
        n << endl <<
        n100 << " nota(s) de R$ 100,00\n" <<
        n50 << " nota(s) de R$ 50,00\n" <<
        n20 << " nota(s) de R$ 20,00\n" <<
        n10 << " nota(s) de R$ 10,00\n" <<
        n5 << " nota(s) de R$ 5,00\n" <<
        n2 << " nota(s) de R$ 2,00\n" <<
        n1 << " nota(s) de R$ 1,00\n";
}