

#include <iostream>
using namespace std;

class Owner {
    string name;
    int age;

public:
    static int ownerCount; // Static variable to count the number of Owner objects

    Owner(string name, int age) : name(name), age(age) {
        ownerCount++; // Increment count on creation
    }

    void displayDetails() const {
        cout << "Owner: " << name << ", Age: " << age << endl;
    }

    static int getOwnerCount() { // Static member function to get the count of owners
        return ownerCount;
    }

    ~Owner() {
        ownerCount--; // Decrement count on destruction
    }
};

// Initialize static variable
int Owner::ownerCount = 0;
