#include<iostream>
using namespace std;

int main() {
    int cantidad_numeros, promedio, arreglo[20], acumulador_suma;

    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> cantidad_numeros;

    acumulador_suma = 0;

    for (int i = 0; i < cantidad_numeros; i++) {
        cin >> arreglo[i];
        acumulador_suma = acumulador_suma + arreglo[i];
    }

    promedio = acumulador_suma / cantidad_numeros;

    for (int i = 0; i < cantidad_numeros; i++) {
        if (arreglo[i] > promedio) {
            cout << "Numero mayor que el promedio del areglo: " << arreglo[i] << endl;
        }
    }
}