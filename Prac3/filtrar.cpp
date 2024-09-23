// --------------------------------------------------------------------
// PEDRO MONFORT CARO / 17-09-2024 / filtrar
// --------------------------------------------------------------------

#include <iostream>
using namespace std;

// --------------------------------------------------------------------
// numeros : [R] -> fitrar() -> [R]
// --------------------------------------------------------------------

int filtrar(int numeros[], int size, int positivos[], int &sizePositivos){

     // Se agrega el '&' para que cualquier cambio realizado a sizePositivos afectara a la variable original en el amin()

    sizePositivos = 0;

    for (int i = 0; i < size; i++){
        
        if(numeros[i] >= 0){

            positivos[sizePositivos] = numeros[i];

            sizePositivos++;

        }

    }

    return sizePositivos;
};

// --------------------------------------------------------------------
// --------------------------------------------------------------------

int main() {

    int size = 6;
    
    int numeros[] = {1, -1, 3, 6, 7, -10};

    int positivos[size];
    
    int sizePositivos = 0;
    
    filtrar(numeros, size, positivos, sizePositivos);

    for (int i = 0; i < sizePositivos; i++) {
    
        cout << positivos[i] << "\n";
    
    }

    cout << endl;

    return 0;
}

// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
