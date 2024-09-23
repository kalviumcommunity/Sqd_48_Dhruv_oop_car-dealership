#include <iostream>
using namespace std;

class Owner {
    string name;
    int age;

public:
    // Constructor to initialize Owner object
    Owner(string name = "", int age = 0) : name(name), age(age) {}

    // Member function to display Owner details
    void displayDetails() const {
        cout << "Owner: " << name << ", Age: " << age << endl;
    }

    // Member function to update age
    void updateAge(int newAge) {
        age = newAge;
    }

    // Destructor to confirm object destruction
    ~Owner() {
        cout << "Owner " << name << "Deleted" << endl;
    }
};
