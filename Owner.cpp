// #include <iostream>
// using namespace std;

// class Owner {
// private:
//     // Private data members to hide internal details
//     string name;
//     int age;

// public:
//     // Constructor to initialize Owner object
//     Owner(string name, int age) : name(name), age(age) {}

//     // Accessor (getter) for name
//     string getName() const {
//         return name;
//     }

//     // Mutator (setter) for name
//     void setName(string newName) {
//         if (!newName.empty()) {
//             name = newName;
//         }
//     }

//     // Accessor (getter) for age
//     int getAge() const {
//         return age;
//     }

//     // Mutator (setter) for age
//     void setAge(int newAge) {
//         if (newAge > 0) {
//             age = newAge;
//         }
//     }

//     // Member function to display Owner details
//     void displayDetails() const {
//         cout << "Owner: " << name << ", Age: " << age << endl;
//     }
// };

#include <iostream>
using namespace std;

class Owner {
    private:
       string name;
       int age;

public:
    // Default Constructor
    Owner() : name("Unknown"), age(0) {
        cout << "Default Owner constructor called." << endl;
    }

    // Parameterized Constructor
    Owner(string name, int age) : name(name), age(age) {
        cout << "Parameterized Owner constructor called." << endl;
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
        cout << "Destructor called for Owner: " << name << endl;
    }
};
