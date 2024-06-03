// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cstdlib>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int i;
	float num[10];
	for (i=1;i<=10;i++) {
		num[i-1] = (rand()%100)+1;
	}
	for (i=1;i<=10;i++) {
		cout << "Los numero aleatorios son: " << num[i-1] << endl;
	}
	return 0;
}

