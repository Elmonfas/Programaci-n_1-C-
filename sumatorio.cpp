// --------------------------------------------------------------------
// PEDRO MONFORT CARO / 12-09-2024 / sumatorio
// --------------------------------------------------------------------

#include <iostream>
using namespace std;

// --------------------------------------------------------------------
// numero: N -> f(sumatorio) -> N 
// --------------------------------------------------------------------

int sumatorio(int numero){

    return numero * (numero + 1) / 2;

};

// --------------------------------------------------------------------
// --------------------------------------------------------------------

int main(){

    cout << "Ingrese un numero : ";

    int numero;

    cin >> numero;

    cout << "El resultado del sumatorio de "<< numero << " es igual a : " << sumatorio(numero);

    return 0;

};
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
