#include <iostream>

using namespace std;

int main() {
    float capital, tasa_interes, interes, capital_final;

    cout << "Introduce el capital inicial: ";
    cin >> capital;

    cout << "Introduce el tipo de interes (en porcentaje): ";
    cin >> tasa_interes;

    interes = capital * (tasa_interes / 100);
    capital_final = capital + interes;

    cout << "El importe del interes es: " << interes << endl;
    cout << "El capital inicial es: " << capital << endl;
    cout << "La suma de interes mas capital es: " << capital_final << endl;

    return 0;
}

