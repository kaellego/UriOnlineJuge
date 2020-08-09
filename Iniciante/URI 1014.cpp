#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    cout << setprecision(3) << fixed << (x / y) << " km/l" <<endl;
}