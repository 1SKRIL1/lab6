#ifndef AVTO_H
#define AVTO_H

#include <iostream>

class Avto {
protected:
    double price_per_km;  // Ціна проїзду за км
    double km;            // Кількість км

public:
    Avto(double price, double distance);  // Конструктор для ініціалізації
    virtual void display() const;         // Метод для виведення
    virtual double calculateFare() const; // Вираховує суму за проїзд
};

#endif // AVTO_H
