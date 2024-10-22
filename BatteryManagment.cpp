#include "BatteryManagment.h"
std::ostream &operator<<(std::ostream &os, const BatteryManagment &rhs)
{
    os << "_voltage: " << rhs._voltage
       << " _Ampere_per_hour: " << rhs._Ampere_per_hour
       << " _maximum_charge_of_the_battery: " << rhs._maximum_charge_of_the_battery;
    return os;
}

BatteryManagment::BatteryManagment(float voltage, float Ampere_per_hour, int maximum_charge_of_the_battery) : _voltage{voltage}, _Ampere_per_hour{Ampere_per_hour}, _maximum_charge_of_the_battery{maximum_charge_of_the_battery}
{
}