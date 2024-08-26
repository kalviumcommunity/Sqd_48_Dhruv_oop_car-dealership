#include <iostream>
#include <string>
using namespace std;

class Owner {
private:
    string name;
    int age;

public:
    // Constructor
    Owner(string nm, int ag)
        : name(nm), age(ag) {}

    // Member function 1: Display owner details
    void displayDetails() {
        cout << "Owner: " << name << ", Age: " << age << endl;
    }

    // Member function 2: Update age
    Owner* updateAge(int newAge) {
        this->age = newAge;
        return this; // Enable method chaining
    }
};

