// #include "Car.cpp"
// #include "Owner.cpp"

// int main() {
//     Car* car1 = new Car("Toyota", "Camry", 2020, 30000);
//     Car* car2 = new Car("Honda", "Civic", 2019, 25000);
//     Owner* owner1 = new Owner("John Doe", 35);

//     car1->displayDetails();
//     car2->displayDetails();
//     owner1->displayDetails();

//     // Using static member functions to access static variables
//     cout << "Total Cars: " << Car::getCarCount() << endl;
//     cout << "Total Owners: " << Owner::getOwnerCount() << endl;

//     delete car1;
//     delete car2;
//     delete owner1;

//     // Display counts after deletion
//     cout << "Total Cars after deletion: " << Car::getCarCount() << endl;
//     cout << "Total Owners after deletion: " << Owner::getOwnerCount() << endl;

//     return 0;
// }

#include "Car.cpp"
#include "Owner.cpp"

int main() {
    // Create Car and Owner objects
    Car car1("Toyota", "Camry", 2020, 30000);
    Owner owner1("John Doe", 35);

    // Use accessor and mutator methods
    cout << "Initial price: $" << car1.getPrice() << endl;
    car1.setPrice(32000); // Update the price
    car1.displayDetails();

    cout << "Initial owner name: " << owner1.getName() << endl;
    owner1.setName("Jane Doe"); // Update the name
    owner1.displayDetails();

    return 0;
}
