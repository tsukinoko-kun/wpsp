#include "Fuhrpark_1.h"
#include "Fahrzeug.h"
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
  for (size_t i = 0; i < anzElem; ++i) {
    pFuhrpark[i]->Print();
  }
}
