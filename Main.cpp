#include "Car.cpp"
#include <iostream>

int main() {
    Car cars[3] = {
        Car("Toyota", "Camry", 2020, 30000.00),
        Car("Honda", "Civic", 2019, 25000.00),
        Car("Ford", "Mustang", 2021, 40000.00)
    };

    for (int i = 0; i < 3; i++) {
        cars[i].displayDetails();
    }

    cars[0].updateYear(2023)->updatePrice(32000.00);

    cars[0].displayDetails();

    return 0;
}
