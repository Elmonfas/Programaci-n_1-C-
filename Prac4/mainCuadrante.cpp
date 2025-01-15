// ---------------------------------------------------
// PEDRO MONFORT CARO / 14-01-2025 / main.cpp
// g++  Punto.cpp mainCuadrante.cpp 
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
  double nx = -3;
  double ny = -8;
  // std::cout << "Dime coordenada X: ";
  // std::cin >> nx;
  // std::cout << "Dime coordenada Y: ";
  // std::cin >> ny;

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
//   queCuadrante()
// ->
//  cuadrante
// ---------------------------------------------------

void queCuadrante(const Punto& punto) {
  int x = punto.getX();
  int y = punto.getY();

  if (x > 0 && y > 0) {
    std::cout << "El punto está en el Cuadrante 1\n";
  }
  else if (x < 0 && y > 0) {
    std::cout << "El punto está en el Cuadrante 2\n";
  }
  else if (x < 0 && y < 0) {
    std::cout << "El punto está en el Cuadrante 3\n";
  }
  else if (x > 0 && y < 0) {
    std::cout << "El punto está en el Cuadrante 4\n";
  }
}

// ---------------------------------------------------
// Función principal
// ---------------------------------------------------

int main() {
  Punto origen;  // El punto (0, 0) por defecto

  Punto p1 = leePunto();  // Lee las coordenadas de p1

  std::cout << "----- 📍 CARACTERISTICAS 📍 -----\n";

  queCuadrante(p1);  // Llama a la función que muestra en qué cuadrante está p1

  
  return 0;
} 

// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
