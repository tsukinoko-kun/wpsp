#include "Fahrzeug.h"
#include <iostream>

void Fahrzeug::Print() {
  std::cout << "Hersteller: " << hersteller << std::endl
            << "Modell: " << modell << std::endl
            << "Kennzeichen: " << kennzeichen << std::endl
            << "Reichweite in km: " << reichweiteInKm << std::endl
            << "Ladung in Prozent: " << ladungInProzent << std::endl;
}

Fahrzeug::Fahrzeug(std::string hersteller, std::string modell,
                   std::string kennzeichen, unsigned int reichweiteInKm,
                   unsigned int ladungInProzent) {
  this->hersteller = hersteller;
  this->modell = modell;
  this->kennzeichen = kennzeichen;
  this->reichweiteInKm = reichweiteInKm;
  this->ladungInProzent = ladungInProzent;
}

Fahrzeug::Fahrzeug() {}
