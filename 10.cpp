#include <iostream>

using namespace std;

int main() {
    const float PI = 3.1416;
    float radio, perimetro;
    cout << "Introduce el radio de la circunferencia: ";
    cin >> radio;
    perimetro = 2 * PI * radio;
    cout << "El perimetro de la circunferencia es: " << perimetro;
return 0;
}
