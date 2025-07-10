#include<iostream>
using namespace std;

int encontrarMenor(int arreglo[], int cantidad) {
    int menor = arreglo[0];
    for (int i = 0; i < cantidad; i++) {
        if (arreglo[i] < menor)
            menor = arreglo[i];
    }
    return menor;
}

int main() {
    int cantidad_numeros, numero_mayor, numero_menor, arreglo[20];

    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> cantidad_numeros;
    
    for (int i = 0; i < cantidad_numeros; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    numero_mayor = arreglo[0];
    for (int i = 0; i < cantidad_numeros; i++) {
        if (arreglo[i] > numero_mayor)
            numero_mayor = arreglo[i];
    }
    cout << "El mayor numero del arreglo es: " << numero_mayor << endl;

    numero_menor = encontrarMenor(arreglo, cantidad_numeros);
    cout << "El menor numero del arreglo es: " << numero_menor << endl;

    return 0;
}
