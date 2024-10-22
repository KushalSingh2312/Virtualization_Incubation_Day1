#ifndef CHARGECONTROLUNIT_H
#define CHARGECONTROLUNIT_H
#include "BatteryManagment.h"
#include <iostream>

class ChargeControlUnit 
{
private:
    BatteryManagment *_battery;
public:
    ChargeControlUnit() = default; // Default constructor
    ChargeControlUnit(BatteryManagment *battery);
    ChargeControlUnit(const ChargeControlUnit&) = default; // Copy constructor
    ChargeControlUnit& operator=(const ChargeControlUnit&) = delete; // Copy assignment operator
    ChargeControlUnit(ChargeControlUnit&&) = default; // Move constructor
    ChargeControlUnit& operator=(ChargeControlUnit&&) = delete; // Move assignment operator
    ~ChargeControlUnit() = default; // Destructor

    BatteryManagment *battery() const { return _battery; }
    void setBattery(BatteryManagment *battery) { _battery = battery; }

    friend std::ostream &operator<<(std::ostream &os, const ChargeControlUnit &rhs);
};

#endif // CHARGECONTROLUNIT_H
