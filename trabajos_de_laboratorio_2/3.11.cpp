#include <iostream>
#include <string>
#include "MotorVehicle.h"

int main(){
    MotorVehicle myMotorVehicle{ "Italia", "Gasoline", 2013, "Red", 6262 };
    std::cout<< "Ferrari LaFerrari" << std::endl;
    myMotorVehicle.displayCarDetails();
    myMotorVehicle.setYearOfManufacture(2018);
    myMotorVehicle.setColor("Black");
    myMotorVehicle.displayCarDetails();

    return 0;

}