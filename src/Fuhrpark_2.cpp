#include "Fuhrpark_2.h"
#include "Fahrzeug.h"
#include <iostream>

void Fuhrpark_2::Add(const Fahrzeug &arg) {
  pFuhrpark->push_back(new Fahrzeug(arg));
}

void Fuhrpark_2::Print() const {
  std::cout << "Fuhrpark 2:" << std::endl;
  for (size_t i = 0; i < pFuhrpark->size(); ++i) {
    std::cout << "Fahrzeug " << i + 1 << ":" << std::endl;
    (*pFuhrpark)[i]->Print();
  }
  std::cout << std::endl;
}
