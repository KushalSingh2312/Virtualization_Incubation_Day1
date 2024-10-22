#ifndef BATTERYMANAGMENT_H
#define BATTERYMANAGMENT_H

#include <iostream>

class BatteryManagment 
{
private:
// Energy Stored in a Battery
// Energy Measurement:

// Energy in batteries is typically measured in watt-hours (Wh) or kilowatt-hours (kWh).
// 1 kWh = 1000 Wh.
// Calculation:

// The energy stored in a battery can be calculated using the formula:
// Energy (Wh)=Voltage (V)×Capacity (Ah)

// Example:

// For a battery rated at 60 Ah and operating at 12 V:
// Energy=12 V×60 Ah=720 Wh
// This can also be expressed as:
// Energy = 720 Wh/1000=0.72kWh
// Energy= 1000/ 720 Wh=0.72 kWh

    float _voltage;
    float _Ampere_per_hour;
    int _maximum_charge_of_the_battery{720};
    public:
    BatteryManagment() = default; // Default constructor
    BatteryManagment( float voltage,float Ampere_per_hour, int maximum_charge_of_the_battery);
    BatteryManagment(const BatteryManagment&) = default; // Copy constructor
    BatteryManagment& operator=(const BatteryManagment&) = delete; // Copy assignment operator
    BatteryManagment(BatteryManagment&&) = delete; // Move constructor
    BatteryManagment& operator=(BatteryManagment&&) = delete; // Move assignment operator
    ~BatteryManagment() = default; // Destructor

    float voltage() const { return _voltage; }
    void setVoltage(float voltage) { _voltage = voltage; }

    float amperePerHour() const { return _Ampere_per_hour; }
    void setAmperePerHour(float Ampere_per_hour) { _Ampere_per_hour = Ampere_per_hour; }

    int maximumChargeOfTheBattery() const { return _maximum_charge_of_the_battery; }
    void setMaximumChargeOfTheBattery(int maximum_charge_of_the_battery) { _maximum_charge_of_the_battery = maximum_charge_of_the_battery; }

    friend std::ostream &operator<<(std::ostream &os, const BatteryManagment &rhs);
};

#endif // BATTERYMANAGMENT_H
