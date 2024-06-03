#include <iostream>

using namespace std;

int main() {
    char pax[] = "juan sin miedo";
    
    cout << pax << " " << &pax[4] << endl;
    cout << pax << endl;
    cout << &pax[4] << endl;

    return 0;
}

