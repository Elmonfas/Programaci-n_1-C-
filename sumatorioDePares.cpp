// --------------------------------------------------------------------
// PEDRO MONFORT CARO / 12-09-2024 / sumatorioDePares
// --------------------------------------------------------------------

#include <iostream>
using namespace std;

// --------------------------------------------------------------------
// numero: N -> f(sumatorioDePares) -> N 
// --------------------------------------------------------------------

int sumatorioDePares(int numero){

    int res = 0;

    for (int i = 0; i <= numero; i++){

        if (i % 2 == 0){
            
            res += i;

        }
    }

    return res;
}

// --------------------------------------------------------------------
// --------------------------------------------------------------------

int main(){

    cout << "Ingresa un numero: ";
    

    int numero;
    
    cin >> numero;

    cout << "El resultado del sumatorio de los numeros pares hasta el " << numero << " es igual a: " << sumatorioDePares(numero);

    return 0;

}

// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
