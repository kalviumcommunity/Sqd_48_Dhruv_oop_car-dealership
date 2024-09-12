// #include "Car.cpp"
// #include <iostream>

// int main() {
//     Car cars[3] = {
//         Car("Toyota", "Camry", 2020, 30000.00),
//         Car("Honda", "Civic", 2019, 25000.00),
//         Car("Ford", "Mustang", 2021, 40000.00)
//     };

//     for (int i = 0; i < 3; i++) {
//         cars[i].displayDetails();
//     }

//     cars[0].updateYear(2023)->updatePrice(32000.00);

//     cars[0].displayDetails();

//     return 0;
// }

#include "Car.cpp"
#include <iostream>
using namespace std;

int main() {
    int numCars = 3; // Fixed number of cars for demonstration

    // Dynamically allocate memory for an array of Car objects
    Car* cars = new Car[numCars] {
        Car("Toyota", "Camry", 2020, 30000.00),
        Car("Honda", "Civic", 2019, 25000.00),
        Car("Ford", "Mustang", 2021, 40000.00)
    };

    // Display details of all cars
    for (int i = 0; i < numCars; i++) {
        cars[i].displayDetails();
    }

    // Update the year of the first car
    cars[0].updateYear(2023);
    // Update the price of the first car
    cars[0].price = 32000.00;

    // Display updated details of all cars
    for (int i = 0; i < numCars; i++) {
        cars[i].displayDetails();
    }

    // Release dynamically allocated memory for Car objects
    delete[] cars;

    return 0;
}
