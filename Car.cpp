#include <iostream>
using namespace std;

// Base class
class Car {
protected:
    string make;
    string model;
    int year;
    double price;

public:
    // Parameterized constructor to initialize Car object
    Car(string make, string model, int year, double price)
        : make(make), model(model), year(year), price(price) {
        cout << "Car object created: " << make << " " << model << endl;
    }

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

    // Destructor
    ~Car() {
        cout << "Car object destroyed: " << make << " " << model << endl;
    }
};

// Derived class using single inheritance
class ElectricCar : public Car {
    double batteryRange; // Additional property for ElectricCar

public:
    // Parameterized constructor for ElectricCar
    ElectricCar(string make, string model, int year, double price, double batteryRange)
        : Car(make, model, year, price), batteryRange(batteryRange) {
        cout << "ElectricCar object created: " << make << " " << model << endl;
    }

    // Display details specific to ElectricCar
    void displayDetails() const {
        Car::displayDetails();
        cout << "Battery Range: " << batteryRange << " miles" << endl;
    }

    // Destructor
    ~ElectricCar() {
        cout << "ElectricCar object destroyed: " << make << " " << model << endl;
    }
};

// Derived class using multilevel inheritance
class LuxuryElectricCar : public ElectricCar {
    string luxuryFeatures;

public:
    // Parameterized constructor for LuxuryElectricCar
    LuxuryElectricCar(string make, string model, int year, double price, double batteryRange, string luxuryFeatures)
        : ElectricCar(make, model, year, price, batteryRange), luxuryFeatures(luxuryFeatures) {
        cout << "LuxuryElectricCar object created: " << make << " " << model << endl;
    }

    // Display details specific to LuxuryElectricCar
    void displayDetails() const {
        ElectricCar::displayDetails();
        cout << "Luxury Features: " << luxuryFeatures << endl;
    }

    // Destructor
    ~LuxuryElectricCar() {
        cout << "LuxuryElectricCar object destroyed: " << make << " " << model << endl;
    }
};
