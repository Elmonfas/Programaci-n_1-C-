// ---------------------------------------------------
// PEDRO MONFORT CARO / 14-01-2025 / main.cpp
// g++  Punto.cpp mainLejano.cpp 
// ---------------------------------------------------

#include <iostream>
#include "Punto.h"

// ---------------------------------------------------
// Punto
// ->
//   muestraPunto()
// ---------------------------------------------------

void muestraPunto(const Punto & p) {
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
  std::cout << "Dime coordenada X: ";
  std::cin >> nx;
  std::cout << "Dime coordenada Y: ";
  std::cin >> ny;

  Punto nuevo(nx, ny);
  return nuevo;
}

// ---------------------------------------------------
//   leeListaPuntos()
// ->
// Lista<Punto>
// ---------------------------------------------------

void leeListaPuntos(Punto * pLista, const int cuantos) {
  for (int i = 0; i < cuantos; i++) {
    pLista[i] = leePunto();
  }
}

// ---------------------------------------------------
//   lejano()
// ->
//  punto lejano
// ---------------------------------------------------

Punto lejano(Punto p1, Punto p2, Punto origen) {
    double p1Dist = origen.distancia(p1);  // Usar double
    double p2Dist = origen.distancia(p2);  // Usar double

    if (p1Dist > p2Dist) {
        return p1;
    } else if (p1Dist < p2Dist) {
        return p2;
    } else {
        return origen;  // Si están a la misma distancia, retorna el origen
    }
}

// ---------------------------------------------------
// Función principal
// ---------------------------------------------------

int main() {
  Punto origen;  // El punto (0, 0) por defecto

  Punto p1 = leePunto();  // Lee las coordenadas de p1
  Punto p2 = leePunto();  // Lee las coordenadas de p2

  std::cout << "----- 📍 CARACTERISTICAS 📍 -----\n";

  std::cout << "El punto más lejano es: ";
  muestraPunto(lejano(p1, p2, origen));  // Llama a la función que muestra el punto más lejano entre p1 y p2

  
  return 0;
} // ()

// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
