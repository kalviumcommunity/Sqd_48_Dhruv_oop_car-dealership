#include <iostream>
#include <string>
using namespace std;

class Owner {
private:
    string name;
    int age;

public:
    // this is Constructor
    Owner(string nm, int ag)
        : name(nm), age(ag) {}

    // Member function Displaying owner details
    void displayDetails() {
        cout << "Owner: " << name << ", Age: " << age << endl;
    }

    // Member function Updating age
    Owner* updateAge(int newAge) {
        this->age = newAge;
        return this; 
    }
};

