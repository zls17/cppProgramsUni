#include <iostream>

class CarDealership {
    public:
        std::string model {};
        std::string manufacturer {};
        int yearManufactured {};
        CarDealership(std::string model, std::string manufacturer, int year) {
            model = model;
            manufacturer = manufacturer;
            yearManufactured = year;
        }
        void getDetails(CarDealership car) {
            std::cout << "Model of car: " << car.model << "\nManufacturer: " << car.manufacturer 
            << "\nYear of Manufacturing: " << car.yearManufactured; 
        }
};




int main() {
    CarDealership nissanMicra("Nissan Micra", "Nissan", 2013);
    nissanMicra.getDetails(nissanMicra);
    return 0;
}