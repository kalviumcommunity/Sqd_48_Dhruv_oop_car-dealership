#include <iostream>
using namespace std;

class Car {
    string make;
    string model;
    int year;
    double price;

public:
    // Constructor to initialize Car object
    Car(string make = "", string model = "", int year = 0, double price = 0.0) 
        : make(make), model(model), year(year), price(price) {}

    // Member function to display Car details
    void displayDetails() const {
        cout << "Car: " << make << " " << model << ", Year: " << year << ", Price: $" << price << endl;
    }

    // Member function to update the year of the car
    void updateYear(int newYear) {
        year = newYear;
    }

    // Destructor to confirm object destruction
    ~Car() {
        cout << "Car " << make << " " << model << " destroyed." << endl;
    }
};

