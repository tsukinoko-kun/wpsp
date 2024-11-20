#ifndef FUHRPARK1_H
#define FUHRPARK1_H

#include "Fahrzeug.h"

class Fuhrpark_1 {
public:
  void Add(const Fahrzeug &arg);
  void Print() const;

private:
  static const size_t Max_Elems = 100;
  size_t anzElem;
  Fahrzeug *pFuhrpark[Max_Elems];
};

#endif // !FUHRPARK1_H
