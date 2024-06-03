// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	string arreglo1[2];
	float arreglo2[3];
	int i;
	arreglo1[0] = "Fernando";
	arreglo1[1] = "Oscar";
	arreglo2[0] = 74;
	arreglo2[1] = 56;
	arreglo2[2] = 10;
	cout << "arreglo 1" << endl;
	for (i=1;i<=2;i++) {
		cout << "El dato en la posicion " << 1 << " es: " << arreglo1[i-1] << endl;
	}
	cout << "arreglo 2" << endl;
	for (i=1;i<=3;i++) {
		cout << "El dato en la posicion " << i << " es: " << arreglo2[i-1] << endl;
	}
	return 0;
}

