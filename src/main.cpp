#include "defer.h"
#include <iostream>

struct Meep {
  std::string foo = "Meep!";
};

int main() {
  Meep *meep = new Meep();
  DEFER(delete meep);

  DEFER(std::cout << "Goodbye, " << meep->foo << std::endl);
  std::cout << "Hello, " << meep->foo << std::endl;
  return 0;
}
