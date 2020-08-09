#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double raio, pi = 3.14159;
    cin >> raio;
    cout << "VOLUME = " << setprecision(3) << fixed
        << ((4.0/3) * pi * (raio * raio * raio)) << endl;
}