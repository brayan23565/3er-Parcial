// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// En C++ no se puede dimensionar un arreglo estático con una dimensión no constante.
// PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
// Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
// este mecanismo aún no está soportado en las traducciones automáticas de PSeInt.
#define ARREGLO_MAX 100

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
	float cont;
	int i;
	float num[ARREGLO_MAX];
	SIN_TIPO numero;
	int p;
	cont = 0;
	cout << "digite el numero de posiciones" << endl;
	cin >> p;
	for (i=1;i<=p;i++) {
		cout << "Digite numero " << i << endl;
		cin >> numero;
		num[i-1] = numero;
	}
	for (i=1;i<=p;i++) {
		cout << "Los numeros ingresados son: " << num[i-1] << endl;
		if ((num[i-1]>0)) {
			cont = cont+1;
		}
	}
	cout << "Hay " << cont << " numeros positivos" << endl;
	return 0;
}

