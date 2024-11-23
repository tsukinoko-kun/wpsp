#include "Fahrzeug.h"
#include "Fuhrpark_1.h"
#include "Fuhrpark_2.h"

int main() {
  Fuhrpark_1 f1;
  Fuhrpark_2 f2;

  Fahrzeug ts("Tesla", "Model S", "M-1234", 500, 80);
  f1.Add(ts);
  f2.Add(ts);

  Fahrzeug pt("Porsche", "Taycan", "M-5678", 400, 90);
  f1.Add(pt);
  f2.Add(pt);

  f1.Print();
  f2.Print();

  return 0;
}
