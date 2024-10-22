#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.push_back(new BatteryManagment(12, 34, 720));
    data.push_back(new BatteryManagment(14, 15, 720));
    data.push_back(new BatteryManagment(12, 100, 720));
}

void PrintObjects(Container &data)
{
    for (ChargeControlUnit ptr : data)
    {
        std::cout << ptr << std::endl;
    }
}

void Charging_in_limit(const Container &data)
{
    for (ChargeControlUnit ptr : data)
    {
        if (ptr.battery()->voltage() * ptr.battery()->amperePerHour() < ptr.battery()->maximumChargeOfTheBattery())
        {
            std::cout << "Charging is under the limit of the battery" << std::endl;
        }
        else
        {
            std::cout << "Charging is overlimit" << std::endl;
        }
    }
}
