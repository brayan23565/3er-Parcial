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
	float acum;
	float acum2;
	int i;
	SIN_TIPO num;
	int t;
	float vector1[ARREGLO_MAX];
	float vector2[ARREGLO_MAX];
	float vector3[2];
	acum = 0;
	acum2 = 0;
	cout << "Digite el tamano del vector 1" << endl;
	cin >> t;
	for (i=1;i<=t;i++) {
		cout << "Digite un numero " << i << endl;
		cin >> num;
		vector1[i-1] = num;
		acum = acum+vector1[i-1];
	}
	cout << "Digite el tamano del vector 2" << endl;
	cin >> t;
	for (i=1;i<=t;i++) {
		cout << "Digite un numero " << i << endl;
		cin >> num;
		vector2[i-1] = num;
		acum2 = acum2+vector2[i-1];
	}
	vector3[i-1] = acum+acum2;
	cout << "Resultado total <- " << vector3[i-1] << endl;
	return 0;
}

