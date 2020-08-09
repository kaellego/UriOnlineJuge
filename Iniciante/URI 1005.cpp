#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << setprecision(5) << fixed << "MEDIA = " <<((a * 3.5) + (b * 7.5))/11 << endl;
}