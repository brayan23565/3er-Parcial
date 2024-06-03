#include <iostream>

using namespace std;

int main() {
    float farenheit, celsius;
    cout << "Introduzca una temperatura en grados Farenheit: ";
    cin >> farenheit;
    celsius=(farenheit - 32) * 5.0 / 9.0;
    cout << "La temperatura en grados Celsius es: "<<celsius;
    return 0;
}

