// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int i;
	SIN_TIPO num[5];
	SIN_TIPO nume;
	// creamos el arreglo le damos un nombre y un tamano de 5 posiciones
	// a cada posicion le damos un dato con el ciclo para
	for (i=0;i<=5-1;i++) {
		// pido los datos
		cout << "Digite un numero para la posicion " << i << endl;
		// capturo los numeros ingresados en la variable numero
		cin >> nume;
		// al arreglo le paso todos los numeros ingresados
		num[i-1] = nume;
	}
	// imprimimos los datos asigados en el ciclo Para 
	for (i=0;i<=5-1;i++) {
		cout << "El dato en la posicion " << i << " es: " << num[i-1] << endl;
	}
	return 0;
}
