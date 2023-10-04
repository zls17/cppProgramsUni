#include <iostream>
#include <iostream>

class CarDealership {
    public:
        std::string model {};
        std::string manufacturer {};
        int yearManufactured {};
        CarDealership(std::string mod, std::string manuf, int yr) {
            model = mod;
            manufacturer = manuf;
            yearManufactured = yr;
        }
        void getDetails(CarDealership car) {
            std::cout << "Model of car: " << car.model << "\nManufacturer: " << car.manufacturer 
            << "\nYear of Manufacturing: " << car.yearManufactured << '\n';
        }
};




int main() {
    CarDealership nissanMicra("Nissan Micra", "Nissan", 2013);
    nissanMicra.getDetails(nissanMicra);
    return 0;
}
