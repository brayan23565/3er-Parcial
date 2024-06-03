#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingrese tres numeros enteros de una cifra:" << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 == 1 && num2 == 2 && num3 == 3) {
        cout << "Acceso permitido." << endl;
    } else {
        cout << "Acceso denegado." << endl;
    }

    return 0;
}

