#include <iostream>
#include <cmath>
using namespace std;
double sumar(double a, double b) {
    return a + b;
}
double restar(double a, double b) {
    return a - b;
}
double multiplicar(double a, double b) {
    return a * b;
}
double dividir(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division por cero no permitida." << endl;
        return 0;
    }
}
double raizCuadrada(double a) {
    if (a >= 0) {
        return sqrt(a);
    } else {
        cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo." << endl;
        return 0;
    }
}
double potencia(double base, double exponente) {
    return pow(base, exponente);
}

int main() {
    double num1, num2;
    int opcion;
    bool continuar = true;

    while (continuar) {
        cout << "Calculadora" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Raiz cuadrada" << endl;
        cout << "6. Potencia" << endl;
        cout << "7. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4 || opcion == 6) {
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            if (opcion != 5) {
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
            }
        } else if (opcion == 5) {
            cout << "Ingrese el numero: ";
            cin >> num1;
        }
        switch (opcion) {
            case 1:
                cout << "Resultado: " << sumar(num1, num2) << endl;
                break;
            case 2:
                cout << "Resultado: " << restar(num1, num2) << endl;
                break;
            case 3:
                cout << "Resultado: " << multiplicar(num1, num2) << endl;
                break;
            case 4:
                cout << "Resultado: " << dividir(num1, num2) << endl;
                break;
            case 5:
                cout << "Resultado: " << raizCuadrada(num1) << endl;
                break;
            case 6:
                cout << "Resultado: " << potencia(num1, num2) << endl;
                break;
            case 7:
                continuar = false;
                break;
            default:
                cout << "Opcion no valida. Por favor, intente de nuevo." << endl;
        }

        cout << endl;
    }

    cout << "Gracias por usar la calculadora." << endl;

    return 0;
}

