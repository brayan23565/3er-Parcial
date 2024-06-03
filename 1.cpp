#include <iostream>
using namespace std;
int main() {
    int unidades, precio, subtotal;

    cout << "Ingrese la cantidad de unidades: ";
    cin >> unidades;
    cout << "Cantidad de unidades: " << unidades;

    cout << "Ingrese el precio: ";
    cin >> precio;
    cout << "Precio: " << precio;

    subtotal = unidades * precio;
    cout << "Subtotal: " << subtotal;

    return 0;
}

