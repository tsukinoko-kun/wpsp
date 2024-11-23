#include "Fuhrpark_1.h"
#include "Fahrzeug.h"
#include <iostream>
#include <stdexcept>

void Fuhrpark_1::Add(const Fahrzeug &arg) {
  if (anzElem < Max_Elems) {
    pFuhrpark[anzElem] = new Fahrzeug(arg);
    ++anzElem;
  } else {
    throw new std::out_of_range("Fuhrpark_1 instalce is full");
  }
}

void Fuhrpark_1::Print() const {
  std::cout << "Fuhrpark 1:" << std::endl;
  for (size_t i = 0; i < anzElem; ++i) {
    std::cout << "Fahrzeug " << i + 1 << ":" << std::endl;
    pFuhrpark[i]->Print();
  }
  std::cout << std::endl;
}
