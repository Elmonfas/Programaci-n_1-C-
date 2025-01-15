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

// ---------------------------------------------------
// Función principal
// ---------------------------------------------------

int main() {

  Punto origen;

  Punto p1 = leePunto();

  double dist = origen.distancia( p1 );

  std::cout << " la distancia de p1 al origen es " << dist << "\n";

} 

// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
