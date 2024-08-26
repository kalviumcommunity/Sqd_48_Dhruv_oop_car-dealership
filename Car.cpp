#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    double price;

public:
    // Constructor
    Car(string mk, string mdl, int yr, double prc)
        : make(mk), model(mdl), year(yr), price(prc) {}

    // Member function 1: Display car details
    void displayDetails() {
        cout << "Car: " << make << " " << model << ", Year: " << year << ", Price: $" << price << endl;
    }

    // Member function 2: Update year
    Car* updateYear(int newYear) {
        this->year = newYear;
        return this; // Enable method chaining
    }

    // Member function 3: Update price
    Car* updatePrice(double newPrice) {
        this->price = newPrice;
        return this; // Enable method chaining
    }
};

