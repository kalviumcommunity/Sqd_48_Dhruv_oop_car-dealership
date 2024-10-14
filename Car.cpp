#include <iostream>
using namespace std;

class Car {
private:
    // Private data members to hide internal details
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

    // Accessor (getter) for year
    int getYear() const {
        return year;
    }

    // Mutator (setter) for year
    void setYear(int newYear) {
        if (newYear > 1885) { // Cars were not made before 1885
            year = newYear;
        }
    }

    // Member function to display Car details
    void displayDetails() const {
        cout << "Car: " << make << " " << model << ", Year: " << year << ", Price: $" << price << endl;
    }
};
