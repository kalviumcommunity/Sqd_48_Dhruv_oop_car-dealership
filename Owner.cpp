// #include <iostream>
// #include <string>
// using namespace std;

// class Owner {
// private:
//     string name;
//     int age;

// public:
//     // this is Constructor
//     Owner(string nm, int ag)
//         : name(nm), age(ag) {}

//     // Member function Displaying owner details
//     void displayDetails() {
//         cout << "Owner: " << name << ", Age: " << age << endl;
//     }

//     // Member function Updating age
//     Owner* updateAge(int newAge) {
//         this->age = newAge;
//         return this; 
//     }
// };

#include <iostream>
using namespace std;

class Owner {
private:
    string name;
    int age;

public:
    // Constructor to initialize Owner object
    Owner(string name, int age) : name(name), age(age) {}

    // Member function to display Owner details
    void displayDetails() const {
        cout << "Owner: " << name << ", Age: " << age << endl;
    }

    // Member function to update the age of the owner
    void updateAge(int newAge) {
        age = newAge;
    }

    // Destructor to confirm object destruction
    ~Owner() {
        cout << "Owner " << name << " destroyed." << endl;
    }
};

