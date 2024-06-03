#include <iostream>

using namespace std;

int main() {
    int num;
    
    cout << "Ingrese un numero entero: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "El numero ingresado es par." << endl;
        
        if (num % 3 == 0) {
            cout << "El numero par ingresado es multiplo de 3." << endl;
        } else {
            cout << "El numero par ingresado no es multiplo de 3." << endl;
        }
    } else {
        cout << "El numero ingresado es impar." << endl;
    }
    
    return 0;
}

