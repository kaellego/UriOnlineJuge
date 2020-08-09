#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double x, y, x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x = x2 - x1;
    y = y2 - y1;
    x *= x;
    y *= y;
    cout << setprecision(4) << fixed << sqrt(x + y) << endl;
}