#include <iostream>
using namespace std;
int main() {
    int i1, i2, i3;
    float r1, r2, r3, r4;
    i1 = 12;
    i2 = 5;
    r1 = 12.0;
    r2 = 5;
    r3 = r1 / r2;
    cout << "Resultado de r1 / r2: " << r3;
    r3 = i1 / i2; 
    cout << "Resultado de i1 / i2: " << r3;
    i3 = i1 / r2; 
    cout << "Resultado de i1 / r2: " << i3;
    r4 = i1 / r1;
    cout << "Resultado de i1 / r1: " << r4;
return 0;
}
