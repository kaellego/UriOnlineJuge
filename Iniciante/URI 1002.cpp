#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double area, n = 3.14159, raio;
    cin >> raio;
    area = n * (raio * raio);
    cout << "A=" << setprecision(4) << fixed << area << endl;
}