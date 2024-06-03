#include <iostream>

using namespace std;

int main() {
    int i1, i2, i3;
    float r1, r2, r3, r4;
    
    i1 = 12;
    i2 = 5;
    r1 = 12.0;
    r2 = 5.0; 
    r3 = r1 / r2;
    cout << "r3 = r1 / r2 = " << r3 << endl;

    r3 = i1 / i2;
    cout << "r3 = i1 / i2 = " << r3 << endl;

    i3 = i1 / r2;
    cout << "i3 = i1 / r2 = " << i3 << endl;

    r4 = i1 / r1;
    cout << "r4 = i1 / r1 = " << r4 << endl;

    return 0;
}

