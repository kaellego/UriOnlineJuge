#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double f, t, s;
    cin >> f >> t >> s;
    cout << "NUMBER = " << f << endl
        << setprecision(2) << fixed
        << "SALARY = U$ " << (t * s) << endl;
}