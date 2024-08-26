#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string make;
    string model;
    int year;

public:
    // Constructor
    Car(string mk, string mdl, int yr)
        : make(mk), model(mdl), year(yr) {}

    // Member function 1: Display car details
    void displayDetails() {
        cout << "Car: " << make << " " << model << ", Year: " << year << endl;
    }

    // Member function 2: Update year
    void updateYear(int newYear) {
        year = newYear;
    }
};
