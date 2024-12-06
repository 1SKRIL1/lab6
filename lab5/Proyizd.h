#ifndef PROYIZD_H
#define PROYIZD_H

#include "Avto.h"

class Proyizd : public Avto {
private:
    int car_count;         // Кількість авто
    double total_revenue;  // Сумарна виручка

public:
    Proyizd(double price, double distance, int count);  // Конструктор для ініціалізації
    void addCar(int count);        // Додати кількість авто
    void calculateRevenue();       // Розрахунок виручки
    void display() const;          // Вивести дані про проїзд
};

#endif // PROYIZD_H
