#include "Car.cpp"
#include "Owner.cpp"

int main() {
    Car* car1 = new Car("Toyota", "Camry", 2020, 30000);
    Car* car2 = new Car("Honda", "Civic", 2019, 25000);
    Owner* owner1 = new Owner("John Doe", 35);

    car1->displayDetails();
    car2->displayDetails();
    owner1->displayDetails();

    cout << "Total Cars: " << Car::getCarCount() << endl; // Access static variable
    cout << "Total Owners: " << Owner::getOwnerCount() << endl; // Access static variable

    delete car1;
    delete car2;
    delete owner1;

    cout << "Total Cars after deletion: " << Car::getCarCount() << endl;
    cout << "Total Owners after deletion: " << Owner::getOwnerCount() << endl;

    return 0;
}
