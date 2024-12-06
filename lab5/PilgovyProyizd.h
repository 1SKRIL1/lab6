#ifndef PILGOVY_PROYIZD_H
#define PILGOVY_PROYIZD_H

#include "Proyizd.h"

class PilgovyProyizd : public Proyizd {
public:
    PilgovyProyizd(double price, double distance, int count);  // Конструктор для ініціалізації
    double calculateFare() const override;  // Перерахунок пільгового проїзду
    void display() const override;          // Вивести дані про пільговий проїзд
};

#endif // PILGOVY_PROYIZD_H
