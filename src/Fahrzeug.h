#ifndef FAHRZEUG_H
#define FAHRZEUG_H

#include <string>

class Fahrzeug {
public:
  void Print();

public:
  Fahrzeug(std::string hersteller, std::string modell, std::string kennzeichen,
           unsigned int reichweiteInKm, unsigned int ladungInProzent);
  Fahrzeug();

protected:
  std::string hersteller;
  std::string modell;
  std::string kennzeichen;
  unsigned int reichweiteInKm;
  unsigned int ladungInProzent;
};

#endif // FAHRZEUG_H
