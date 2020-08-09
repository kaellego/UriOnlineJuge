#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int a, b, c, maiorab, maiobc, maior;
    cin >> a >> b >> c;
    maiorab = (a + b + abs(a - b))/2;
    maiobc = (b + c + abs(b - c))/2;
    maior = (maiorab + maiobc + abs(maiorab - maiobc))/2;
    cout << maior << " eh o maior" << endl;
}