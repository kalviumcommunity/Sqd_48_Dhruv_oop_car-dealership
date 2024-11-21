#include <iostream>
#include "vehicle.cpp"  // Make sure this is compiled separately
using namespace std;

// Base class Car inheriting from Vehicle
class Car : public Vehicle {
protected:
    string make;
    string model;
    int year;
    double price;

public:
    // Parameterized constructor
    Car(string make, string model, int year, double price)
        : make(make), model(model), year(year), price(price) {
        cout << "Car object created: " << make << " " << model << endl;
    }

    double getPrice() const { return price; }
    void setPrice(double newPrice) {
        if (newPrice > 0) price = newPrice;
    }

    // Overloaded setter for price (integer version)
    void setPrice(int newPrice) {
        if (newPrice > 0) price = static_cast<double>(newPrice);
    }

    // Overriding the pure virtual function from Vehicle
    void showDetails() const override {
        cout << "Car: " << make << " " << model << ", Year: " << year << ", Price: $" << price << endl;
    }

    ~Car() {
        cout << "Car object destroyed: " << make << " " << model << endl;
    }
};

// Derived class ElectricCar
class ElectricCar : public Car {
    double batteryRange;

public:
    ElectricCar(string make, string model, int year, double price, double batteryRange)
        : Car(make, model, year, price), batteryRange(batteryRange) {
        cout << "ElectricCar object created: " << Make << " " << Model << endl;
    }

    void showDetails() const override {
        Car::showDetails();
        cout << "Battery Range: " << batteryRange << " miles" << endl;
    }

    ~ElectricCar() {
        cout << "ElectricCar object destroyed: " << make << " " << model << endl;
    }
};

// Derived class LuxuryElectricCar
class LuxuryElectricCar : public ElectricCar {
    string luxuryFeatures;

public:
    LuxuryElectricCar(string make, string model, int year, double price, double batteryRange, string luxuryFeatures)
        : ElectricCar(make, model, year, price, batteryRange), luxuryFeatures(luxuryFeatures) {
        cout << "LuxuryElectricCar object created: " << make << " " << model << endl;
    }

    void showDetails() const override {
        ElectricCar::showDetails();
        cout << "Luxury Features: " << luxuryFeatures << endl;
    }

    ~LuxuryElectricCar() {
        cout << "LuxuryElectricCar object destroyed: " << make << " " << model << endl;
    }
};
