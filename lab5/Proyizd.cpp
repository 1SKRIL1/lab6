#include "Proyizd.h"

Proyizd::Proyizd(double price, double distance, int count) : Avto(price, distance), car_count(count), total_revenue(0) {}

void Proyizd::addCar(int count) {
    car_count += count;
}

void Proyizd::calculateRevenue() {
    total_revenue = car_count * calculateFare();
}

void Proyizd::display() const {
    std::cout << "Кількість авто: " << car_count << ", Сумарна виручка: " << total_revenue << std::endl;
}
