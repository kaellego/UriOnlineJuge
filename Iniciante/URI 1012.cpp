#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, pi = 3.14159;
    cin >> a >> b >> c;
    cout << setprecision(3) << fixed <<
        "TRIANGULO: " << (a * c)/2 << endl <<
        "CIRCULO: " << ((c*c)*pi) << endl <<
        "TRAPEZIO: " << ((a+b)*c)/2 << endl <<
        "QUADRADO: " << (b * b) << endl <<
        "RETANGULO: " << (a * b) << endl;
}