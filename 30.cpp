#include <iostream>

using namespace std;

int main() {
    char caracter;

    cout << "Ingresa un caracter: ";
    cin >> caracter;

    switch(caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << caracter << " es una vocal." << endl;
            break;
        default:
            cout << caracter << " no es una vocal." << endl;
    }

    return 0;
}

