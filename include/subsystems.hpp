#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor cascade1(1);

inline pros::Motor cascade2(17);
inline pros::Motor cascade3(10);

inline pros::Motor toggler(11);

inline ez::Piston claw('A', false);


// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');