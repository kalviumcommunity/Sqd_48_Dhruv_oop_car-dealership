#include <iostream>
using namespace std;

class Owner {
private:
    string name;
    int age;

public:
    // Parameterized constructor to initialize Owner object
    Owner(string name, int age) : name(name), age(age) {
        cout << "Owner object created: " << name << endl;
    }

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

    // Member function to display Owner details
    void displayDetails() const {
        cout << "Owner: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Owner() {
        cout << "Owner object destroyed: " << name << endl;
    }
};
