#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    string contrasena;
    int intentos = 3;
    string grado_grupo;
    int numero_lista;
    int cantidad;
    float precio_unitario;
    float importe_total = 0;
    int opcion;

    do {
        cout << "Introduce tu nombre de usuario: ";
        cin >> nombre;
        cout << "Introduce tu contraseña (grado_grupo+numero_lista): ";
        cin >> contrasena;

        if(contrasena == "2bmpg" || contrasena == "28") {
            cout << "Bienvenido al sistema.";
            break;
        } else {
            cout << "Nombre de usuario o contraseña incorrectos. Intentos restantes: " << intentos - 1 << endl;
            intentos--;
        }
    } while(intentos > 0);

    if(intentos == 0) {
        cout << "Se ha superado el numero de intentos permitido.";
        return 0;
    }

    do {
        cout << "Ingrese la cantidad de unidades vendidas (0 para terminar): ";
        cin >> cantidad;

        if(cantidad == 0) {
            break;
        }

        cout << "Ingrese el precio unitario del articulo: ";
        cin >> precio_unitario;

        if(cantidad < 0 || precio_unitario < 0) {
            cout << "La cantidad y el precio unitario deben ser numeros positivos.";
            continue;
        }

        importe_total += cantidad * precio_unitario;
    } while(1);

    cout << "El importe total de la factura es: " << fixed << importe_total << endl;

    return 0;
}

