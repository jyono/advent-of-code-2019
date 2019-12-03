//
// Created by jordan on 12/2/19.
//

#include <iostream>
#include "Day1.h"

int SaveSanta::rocketEquation(int mass) {
    std::cout << mass << std::endl;
    int fuel = (mass / 3) - 2;
    //fix this
    if (fuel >= 6
            ) {
        return fuel + SaveSanta::rocketEquation(fuel);
    } else { return fuel; }
};