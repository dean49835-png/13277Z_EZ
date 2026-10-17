#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor intake(9);
inline pros::Motor cascade1(15);
inline pros::Motor cascade2(10);

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');