#include <iostream>
using namespace std;

class Owner {
private:
    string name;
    int age;

public:
    Owner(string name, int age) : name(name), age(age) {
        cout << "Owner object created: " << name << endl;
    }

    string getName() const { return name; }
    void setName(string newName) {
        if (!newName.empty()) name = newName;
    }

    void displayDetails() const {
        cout << "Owner: " << name << ", Age: " << age << endl;
    }

    ~Owner() {
        cout << "Owner object destroyed: " << name << endl;
    }
};

