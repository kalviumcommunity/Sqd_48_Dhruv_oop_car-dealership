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
    // this is Constructor
    Car(string mk, string mdl, int yr, double prc)
        : make(mk), model(mdl), year(yr), price(prc) {}

    // Member function for Displaying car details
    void displayDetails() {
        cout << "Car: " << make << " " << model << ", Year: " << year << ", Price: $" << price << endl;
    }

    // Member function for Updating year
    Car* updateYear(int newYear) {
        this->year = newYear;
        return this; 
    }

    // Member function for Updating price
    Car* updatePrice(double newPrice) {
        this->price = newPrice;
        return this; 
    }
};

