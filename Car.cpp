// #include <iostream>
// using namespace std;

// class Car {
//     string make;
//     string model;
//     int year;
//     double price;

// public:
//     static int carCount; // Static variable to count the number of Car objects

//     Car(string make, string model, int year, double price) 
//         : make(make), model(model), year(year), price(price) {
//         carCount++; // Increment count on creation
//     }

//     void displayDetails() const {
//         cout << "Car: " << make << " " << model << ", Year: " << year << ", Price: $" << price << endl;
//     }

//     static int getCarCount() { // Static member function to get the count of cars
//         return carCount;
//     }

//     ~Car() {
//         carCount--; // Decrement count on destruction
//     }
// };

// // Initialize static variable
// int Car::carCount = 0;

#include <iostream>
using namespace std;

class Car {
    string make;
    string model;
    int year;
    double price;

public:
    // Constructor to initialize Car object
    Car(string make, string model, int year, double price)
        : make(make), model(model), year(year), price(price) {}

    // Accessor (getter) for price
    double getPrice() const {
        return price;
    }

    // Mutator (setter) for price
    void setPrice(double newPrice) {
        if (newPrice > 0) {
            price = newPrice;
        }
    }

    // Member function to display Car details
    void displayDetails() const {
        cout << "Car: " << make << " " << model << ", Year: " << year << ", Price: $" << price << endl;
    }
};
