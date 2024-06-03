#include <iostream>

#define N_1 5
#define N_2 10

using namespace std;

int main() {
    int n1 = N_1;
    int n2 = N_2;

    cout << "Comparacion de dos numeros:";
    cout << "Numero 1:" << n1;
    cout << " Numero 2:" << n2;

    if (n1 > n2) {
        cout << " El numero 1 es mayor que el numero 2.";
    } else if (n1 < n2) {
        cout << " El numero 1 es menor que el numero 2.";
    } else {
        cout << " Los numeros son iguales.";
    }

    return 0;
}

