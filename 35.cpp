#include <iostream>

#define PI 3.1416

using namespace std;

int main() {
    float radio, perimetro;
    cout << "Introduce el radio de la circunferencia: ";
    cin >> radio;
    perimetro = 2 * PI * radio;
    cout << "El perimetro de la circunferencia es: " << perimetro << endl;
    return 0;
}

