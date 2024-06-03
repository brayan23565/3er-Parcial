#include <iostream>

#define PRECIO_ENTRADA 70

using namespace std;

int main() {
    int edad;
    float precio_final;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 5) {
        precio_final = PRECIO_ENTRADA * 0.4; // 60% de descuento
    } else if (edad > 60) {
        precio_final = PRECIO_ENTRADA * 0.45; // 55% de descuento
    } else {
        precio_final = PRECIO_ENTRADA; // Sin descuento
    }

    cout << "El precio de la entrada es: " << precio_final << " pesos" << endl;

    return 0;
}

