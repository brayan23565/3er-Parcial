#include <iostream>
using namespace std;
int main ()
{
	int fecha, ano, edad;
	cout << "Hola  ";
	cout << "Ingrese el ano en el que nacio: ";
	cin >> fecha;
	cout << "Ingrese el ano actual";
	cin >> ano;
	edad = ano - fecha;
	cout << "Si usted nacio en el " << fecha << " Este ano cumple " << edad << " anos.";
	return 0;
}
