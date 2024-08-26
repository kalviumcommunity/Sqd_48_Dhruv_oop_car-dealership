#include "Car.cpp"
#include "Owner.cpp"

int main() {
    // Create objects of Car and Owner classes
    Car car1("Toyota", "Camry", 2020, 30000.00);
    Owner owner1("John Doe", 35);

    // Use member functions
    car1.displayDetails();
    owner1.displayDetails();

    // Update year and price using method chaining
    car1.updateYear(2023)->updatePrice(32000.00);
    owner1.updateAge(36);

    // Display updated details
    car1.displayDetails();
    owner1.displayDetails();

    return 0;
}
