#include <iostream>

using namespace std;

int main() {
    float capital_inicial, tasa_interes, interes, total;
    
    cout << "Introduce el capital inicial: ";
    cin >> capital_inicial;
    
    cout << "Introduce el tipo de interes en porcentaje (%): ";
    cin >> tasa_interes;
    
    interes = (capital_inicial * tasa_interes) / 100;
    total = capital_inicial + interes;
    
    cout << "El importe del inter�s es: " << interes;
    cout << "El capital es: " << capital_inicial;
    cout << "La suma de interes m�s capital es: " << total;
    
    return 0;
}

