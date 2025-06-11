#include<iostream>
using namespace std;

int main() {
    int cantidad_numeros, numero_mayor, arreglo[20];
        cout << "Ingrese la cantidad de elementos del arreglo: ";

    cin >> cantidad_numeros;
    
    for (int i = 0; i < cantidad_numeros; i++){
        cin >> arreglo[i];
    }
    numero_mayor = arreglo[0];

    for (int i = 0; i < cantidad_numeros; i++) {
        if (arreglo[i] > numero_mayor)
            numero_mayor = arreglo[i];
    }
    cout << "El mayor numero del arreglo es: " << numero_mayor;
}