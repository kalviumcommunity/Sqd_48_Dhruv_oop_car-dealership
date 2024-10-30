#include "car.cpp"
#include "owner.cpp"

int main() {
    // Create objects
    Car car1("Toyota", "Camry", 2020, 30000);
    ElectricCar electricCar1("Tesla", "Model 3", 2021, 35000, 250);
    LuxuryElectricCar luxuryElectricCar1("Tesla", "Model S", 2022, 80000, 400, "Autopilot, Premium Sound System");

    // Variables for Owner details
    string ownerName;
    int ownerAge;

    cout << "Enter the owner's name: ";
    cin.ignore();
    getline(cin, ownerName);

    cout << "Enter the owner's age: ";
    cin >> ownerAge;

    Owner owner1(ownerName, ownerAge);

    // Budget input
    double budget;
    cout << "Enter your budget: $";
    cin >> budget;

    // Display cars within budget using showDetails() dynamically
    cout << "\nCars within your budget of $" << budget << ":\n";
    bool found = false;

    Vehicle* vehicles[] = { &car1, &electricCar1, &luxuryElectricCar1 };

    for (Vehicle* vehicle : vehicles) {
        if (static_cast<Car*>(vehicle)->getPrice() <= budget) {
            vehicle->showDetails();
            found = true;
        }
    }

    if (!found) {
        cout << "No cars available within your budget.\n";
    }

    // Demonstrating function overloading for price update
    cout << "\nUpdating car1 price using int setter:\n";
    car1.setPrice(29000);
    car1.showDetails();

    // Display owner details
    cout << "\nOwner Details:\n";
    owner1.displayDetails();

    return 0;
}
