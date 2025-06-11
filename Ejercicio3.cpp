#include<iostream>
using namespace std;

int main() {
    int cantidad_numeros, cambio_orden, arreglo[20];
    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> cantidad_numeros;

        for (int i = 0; i < cantidad_numeros; i++) {
            cin >> arreglo[i];
        }

        for (int i = 0; i < cantidad_numeros / 2; i++) {
            cambio_orden = arreglo[i];
            arreglo[i] = arreglo[cantidad_numeros - i - 1];
            arreglo[cantidad_numeros - i - 1] = cambio_orden;
        }

        cout << "Posiciones cambiadas:" << endl;

        for (int i = 0; i < cantidad_numeros; i++) {
            cout << arreglo[i] << endl;
        }
        return 0;
}