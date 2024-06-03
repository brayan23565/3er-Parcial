#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;
    
    if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " es divisible entre " << num2 << "." << endl;
    } else {
        cout << num1 << " no es divisible entre " << num2 << "." << endl;
    }
    
    return 0;
}

