#include <iostream>
#define PI 3.1416

using namespace std;

int main() {
    float radio, perimetro;
    cout << "Introduzca el radio: ";
    cin >> radio;
    perimetro = 2 * PI * radio;
    cout << perimetro;
    return 0;
}

