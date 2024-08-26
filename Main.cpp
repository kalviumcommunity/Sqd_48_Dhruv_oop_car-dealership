#include "Car.cpp"
#include "Owner.cpp"

int main() {
    // Create objects of Car and Owner classes
    Car car1("Toyota", "Camry", 2020);
    Owner owner1("John Doe", 35);

    // Use member functions
    car1.displayDetails();
    owner1.displayDetails();

    // Update year and age
    car1.updateYear(2023);
    owner1.updateAge(36);

    // Display updated details
    car1.displayDetails();
    owner1.displayDetails();

    return 0;
}
