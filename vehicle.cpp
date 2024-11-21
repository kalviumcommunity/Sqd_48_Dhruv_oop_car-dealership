#include <iostream>
using namespace std;

// Abstract base class
class Vehicle {
public:
    virtual void showDetails() const = 0; // Pure virtual function
    virtual ~Vehicle() {}  // Virtual destructor for proper cleanup of derived objects
};
