#include <iostream>
using namespace std;

const int FILAS = 4;
const int COLUMNAS = 3;

int sumarColumna(int tabla[][COLUMNAS], int columna) {
    int suma = 0;
    for (int i = 0; i < FILAS; ++i) {
        suma += tabla[i][columna];
    }
    return suma;
}

int main() {
    int tabla[FILAS][COLUMNAS];

    cout << "Introduce los valores de la tabla de " << FILAS << " filas por " << COLUMNAS << " columnas:" << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << "Fila " << i+1 << ", Columna " << j+1 << ": ";
            cin >> tabla[i][j];
        }
    }

    int mayorSuma = sumarColumna(tabla, 0);
    for (int j = 1; j < COLUMNAS; ++j) {
        int sumaActual = sumarColumna(tabla, j);
        if (sumaActual > mayorSuma) {
            mayorSuma = sumaActual;
        }
    }

    cout << "La mayor suma de las columnas es: " << mayorSuma << endl;

    return 0;
}

