#pragma once

#include "pros/imu.hpp"
#include "pros/motors.hpp"
#include <vector>
#include <cmath>

namespace vat {





class Drive {
    public:
        int JOYSTICK_DEADZONE;  // Deadzone for joystick input
        template <typename T> T ADJUST_TO_CURVE(T input);
        pros::Imu internal_inertial;
        std::vector<pros::Motor> left_motors;
        std::vector<pros::Motor> right_motors;
        pros::motor_brake_mode_e_t brake_mode = pros::E_MOTOR_BRAKE_COAST;
}

;
}