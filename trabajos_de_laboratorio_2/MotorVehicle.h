#include <iostream>
#include <string>

class MotorVehicle{

    public:
    MotorVehicle(std::string motorVehicleMake,
        std::string motorVehiclefuelType, 
        int motorVehicleYearOfManufacture, 
        std::string motorVehicleColor,
        int motorVehicleEngineCapacity) : make{motorVehicleMake}
        {
            make = motorVehicleMake;
            fuelType = motorVehiclefuelType;
            yearOfManufacture = motorVehicleYearOfManufacture;
            color = motorVehicleColor;
            engineCapacity = motorVehicleEngineCapacity;
        }

    void setMake(std::string motorVehicleMake){
        make = motorVehicleMake;
    }

    void setFuelType(std::string motorVehiclefuelType){
        fuelType = motorVehiclefuelType;
    }

    void setYearOfManufacture(int motorVehicleYearOfManufacture ){
        yearOfManufacture = motorVehicleYearOfManufacture;
    }

    void setColor(std::string motorVehicleColor){
        color = motorVehicleColor;
    }
        
    void setengineCapacity(int motorVehicleEngineCapacity){
        engineCapacity = motorVehicleEngineCapacity;
    }
        

    std::string getMake() const {
        return make;
    }

    std::string getFuelType() const {
        return fuelType;
    }

    int getYearOfManufacture() const {
        return yearOfManufacture;
    }
        
    std::string getColor() const {
        return color;
    }

    int getEngineCapacity() const {
        return engineCapacity;
    }

    void displayCarDetails() {
        std::cout << "Make : " << getMake() << std::endl;
        std::cout << "Fuel Type : " << getFuelType() << std::endl;
        std::cout << "Year Of Manu facture :" << getYearOfManufacture() << std::endl;
        std::cout << "Color : " << getColor() << std::endl;
        std::cout << "Engine Capacity : " << getEngineCapacity() << std::endl;
    }

    private:
        std::string make;
        std::string fuelType;
        int yearOfManufacture;
        std::string color;
        int engineCapacity;

};