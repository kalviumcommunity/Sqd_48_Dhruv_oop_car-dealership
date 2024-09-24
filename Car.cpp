#include <iostream>
using namespace std;

class Car {
    string make;
    string model;
    int year;
    double price;

public:
    static int carCount; // Static variable to count the number of Car objects

    Car(string make, string model, int year, double price) 
        : make(make), model(model), year(year), price(price) {
        carCount++; // Increment count on creation
    }

    void displayDetails() const {
        cout << "Car: " << make << " " << model << ", Year: " << year << ", Price: $" << price << endl;
    }

    static int getCarCount() { // Static function to get the count
        return carCount;
    }

    ~Car() {
        carCount--; // Decrement count on destruction
    }
};

// Initialize static variable
int Car::carCount = 0;
