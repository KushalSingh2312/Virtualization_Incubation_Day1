#include "ChargeControlUnit.h"

std::ostream &operator<<(std::ostream &os, const ChargeControlUnit &rhs)
{
    os << "_battery: " << *rhs._battery;
    return os;
}

ChargeControlUnit::ChargeControlUnit(BatteryManagment *battery) : _battery{battery}
{
}
