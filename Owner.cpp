#include <iostream>
using namespace std;

class Owner {
private:
    // Private data members to hide internal details
    string name;
    int age;

public:
    // Constructor to initialize Owner object
    Owner(string name, int age) : name(name), age(age) {}

    // Accessor (getter) for name
    string getName() const {
        return name;
    }

    // Mutator (setter) for name
    void setName(string newName) {
        if (!newName.empty()) {
            name = newName;
        }
    }

    // Accessor (getter) for age
    int getAge() const {
        return age;
    }

    // Mutator (setter) for age
    void setAge(int newAge) {
        if (newAge > 0) {
            age = newAge;
        }
    }

    // Member function to display Owner details
    void displayDetails() const {
        cout << "Owner: " << name << ", Age: " << age << endl;
    }
};
