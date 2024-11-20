#ifndef FUHRPARK2_H
#define FUHRPARK2_H

#include "Fahrzeug.h"
#include <vector>

class Fuhrpark_2 {
public:
  void Add(const Fahrzeug &arg);
  void Print() const;

private:
  std::vector<Fahrzeug *> *pFuhrpark = new std::vector<Fahrzeug *>;
};

#endif // !FUHRPARK2_H
