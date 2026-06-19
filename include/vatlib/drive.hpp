#pragma once

class Drive {
    public:
        int JOYSTICK_DEADZONE = 5;  // Deadzone for joystick input
        template <typename T> T ADJUST_TO_CURVE(T input);
};