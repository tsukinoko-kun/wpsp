#include "Fuhrpark_2.h"
#include "Fahrzeug.h"

void Fuhrpark_2::Add(const Fahrzeug &arg) {
  pFuhrpark->push_back(new Fahrzeug(arg));
}

void Fuhrpark_2::Print() const {
  for (size_t i = 0; i < pFuhrpark->size(); ++i) {
    (*pFuhrpark)[i]->Print();
  }
}
