// #include "Car.cpp"
// #include "Owner.cpp"

// int main() {
//     // Create Car and Owner objects
//     Car car1("Toyota", "Camry", 2020, 30000);
//     Owner owner1("John Doe", 35);

//     // Use accessor and mutator methods for Car
//     cout << "Initial price: $" << car1.getPrice() << endl;
//     car1.setPrice(32000); // Update the price using setter
//     car1.displayDetails();

//     // Use accessor and mutator methods for Owner
//     cout << "Initial owner name: " << owner1.getName() << endl;
//     owner1.setName("Jane Doe"); // Update the name using setter
//     owner1.displayDetails();

//     return 0;
// }


#include "Car.cpp"
#include "Owner.cpp"

int main() {
    // Using default constructor
    Car car1;
    car1.displayDetails();

    // Using parameterized constructor
    Car car2("Toyota", "Camry", 2020, 30000);
    car2.displayDetails();

    // Using default constructor for Owner
    Owner owner1;
    owner1.displayDetails();

    // Using parameterized constructor for Owner
    Owner owner2("John Doe", 35);
    owner2.displayDetails();

    return 0;
}
