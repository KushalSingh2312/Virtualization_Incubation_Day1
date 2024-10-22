#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "ChargeControlUnit.h"
#include<vector>

using Container=std::vector<ChargeControlUnit>;


void CreateObjects(Container &data);
void PrintObjects(Container &data);
void Charging_in_limit(const Container &data);


#endif // FUNCTIONALITIES_H
