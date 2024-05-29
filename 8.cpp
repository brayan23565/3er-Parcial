#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    int num;
    const int maxNumeros = 20;

    cout << "Introduce hasta 20 numeros enteros. Introduce 0 para finalizar.\n";
    
    for (int i = 0; i < maxNumeros; ++i) {
        cout << "Numero " << i+1 << ": ";
        cin >> num;
        
        if (num == 0) {
            break;
        }

        numeros.push_back(num);
    }

    cout << "Numeros introducidos en orden inverso:\n";
    for (int i = numeros.size() - 1; i >= 0; --i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
