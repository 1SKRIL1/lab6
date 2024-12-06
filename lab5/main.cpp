#include <iostream>
#include "Avto.h"
#include "Proyizd.h"
#include "PilgovyProyizd.h"

int main() {
    // Створюємо об'єкт для звичайного проїзду
    Proyizd proyizd(5.0, 100.0, 10);  // Ціна за км, кількість км, кількість авто
    proyizd.calculateRevenue();
    proyizd.display();

    // Створюємо об'єкт для пільгового проїзду
    PilgovyProyizd pilgovyProyizd(5.0, 100.0, 5);  // Пільговий проїзд
    pilgovyProyizd.calculateRevenue();
    pilgovyProyizd.display();

    return 0;
}
