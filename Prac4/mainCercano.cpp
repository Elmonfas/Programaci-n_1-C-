// ---------------------------------------------------
// PEDRO MONFORT CARO / 14-01-2025 / main.cpp
// g++  Punto.cpp mainCercano.cpp 
// ---------------------------------------------------

#include <iostream>
#include "Punto.h"

// ---------------------------------------------------
// Punto
// ->
//   muestraPunto()
// ---------------------------------------------------

void muestraPunto( const Punto & p ) {
  std::cout << "(" << p.getX() << ", " << p.getY() << ")\n";
}

// ---------------------------------------------------
//   leePunto()
// ->
// Punto
// ---------------------------------------------------

Punto leePunto() {
  double nx;
  double ny;
  std::cout << "dime coordenada X ";
  std::cin >> nx;
  std::cout << "dime coordenada Y ";
  std::cin >> ny;

  Punto nuevo( nx, ny );
  return nuevo;
}

// ---------------------------------------------------
//   leeListaPuntos()
// ->
// Lista<Punto>
// ---------------------------------------------------

void leeListaPuntos( Punto * pLista, const int cuantos ) {
  for( int i=0; i<=cuantos-1; i++) {
	pLista[ i ] = leePunto();
  }
}

Punto cercano(Punto * pLista, const int cuantos, Punto origen){
     
     Punto pCercano = pLista[0]; // Coge el primer elemento de la lista como el mas cercano

    for (int i = 1; i < cuantos; i++){ // recorro la lista de puntos

        if(origen.distancia(pLista[i]) < origen.distancia(pCercano)){ //comparo la distancias de ambos puntos

            pCercano = pLista[i];  // en caso de ser menor, lo almaceni

        }
        
    }

    return pCercano; // lo devuelvo al main
    


}

// ---------------------------------------------------
// Función principal
// ---------------------------------------------------

int main() {

  Punto origen;

  Punto plista[3];

  plista[0] = Punto(3,-1);
  plista[1] = Punto(1,1);
  plista[2] = Punto(2,3);

  std::cout << "----- 📍 CARACTERISTICAS 📍 -----\n";

  std::cout << "El punto más cercano de la lista es: ";
  muestraPunto(cercano(plista, 3, origen));  // Llama a la función que muestra el punto más lejano entre p1 y p2

} 

// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
