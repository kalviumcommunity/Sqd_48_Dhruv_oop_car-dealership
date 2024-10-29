#include "car.cpp"
#include "owner.cpp"

int main() {
    // Create various Car objects
    Car car1("Toyota", "Camry", 2020, 30000);
    ElectricCar electricCar1("Tesla", "Model 3", 2021, 35000, 250);
    LuxuryElectricCar luxuryElectricCar1("Tesla", "Model S", 2022, 80000, 400, "Autopilot, Premium Sound System");

    // Variables for Owner details
    string ownerName;
    int ownerAge;

    // Take user input for Owner details
    cout << "Enter the owner's name: ";
    cin.ignore();  // Ignore any leftover newline character in the input buffer
    getline(cin, ownerName); // Use getline to allow spaces in the name

    cout << "Enter the owner's age: ";
    cin >> ownerAge;

    // Create an Owner object using user input
    Owner owner1(ownerName, ownerAge);

    // Take user input for their budget
    double budget;
    cout << "Enter your budget: $";
    cin >> budget;

    // Display cars within the user's budget
    cout << "\nCars within your budget of $" << budget << ":\n";
    bool found = false;

    // Check if each car fits within the user's budget
    if (car1.getPrice() <= budget) {
        car1.displayDetails();
        found = true;
    }
    if (electricCar1.getPrice() <= budget) {
        electricCar1.displayDetails();
        found = true;
    }
    if (luxuryElectricCar1.getPrice() <= budget) {
        luxuryElectricCar1.displayDetails();
        found = true;
    }

    if (!found) {
        cout << "No cars available within your budget.\n";
    }

    // Demonstrating function overloading (changing the price using overloaded setPrice)
    cout << "\nUpdating car1 price using int setter:\n";
    car1.setPrice(29000);  // Overloaded function accepting an integer
    car1.displayDetails();

    // Display owner details
    cout << "\nOwner Details:\n";
    owner1.displayDetails();

    return 0;
}
