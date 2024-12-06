#include "PilgovyProyizd.h"

PilgovyProyizd::PilgovyProyizd(double price, double distance, int count) : Proyizd(price, distance, count) {}

double PilgovyProyizd::calculateFare() const {
    // Для пільгового проїзду знижка 10% на ціну
    return (price_per_km * km) * 0.9;
}

void PilgovyProyizd::display() const {
    std::cout << "Пільговий проїзд: ";
    Proyizd::display();  // Вивести основну інформацію
}
