#include "Avto.h"

Avto::Avto(double price, double distance) : price_per_km(price), km(distance) {}

void Avto::display() const {
    std::cout << "Ціна за км: " << price_per_km << ", Кількість км: " << km << std::endl;
}

double Avto::calculateFare() const {
    return price_per_km * km;
}
