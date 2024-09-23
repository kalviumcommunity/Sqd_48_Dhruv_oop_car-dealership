#include "Car.cpp"
#include "Owner.cpp"

int main() {
    // Create Car objects dynamically
    Car* car1 = new Car("Toyota", "Camry", 2020);
    Car* car2 = new Car("Honda", "Civic", 2019);
    
    // Create Owner object dynamically
    Owner* owner1 = new Owner("John Doe", 35);

    // Use member functions
    car1->displayDetails();
    car2->displayDetails();
    owner1->displayDetails();

    // Update year and age
    car1->updateYear(2023);
    owner1->updateAge(36);

    // Display updated details
    car1->displayDetails();
    owner1->displayDetails();

    // Delete dynamically allocated memory
    delete car1;
    delete car2;
    delete owner1;

    return 0;
}
