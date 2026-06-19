#include "vatlib/drive.hpp"

template <typename T> T Drive::ADJUST_TO_CURVE(T input) {
    // Adjust the input to a curve for better control
    if (std::abs(input) < JOYSTICK_DEADZONE) {
        return 0;  // Return 0 if within deadzone
    }
    // Apply a simple quadratic curve for smoother control
    return (input > 0 ? 1 : -1) * (std::pow(std::abs(input), 2));
}