/*
This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "api.h"
#include "driver_selector.hpp"

inline std::string unselected_cursor = "#";
inline std::string selected_cursor = "&";
inline std::string cursor = unselected_cursor;

inline int cursor_placement = 0;

double add_driver_default(driver_values *driver, int param, double added);
pros::controller_digital_e_t controller_button(int input);
double current_value(driver_values *driver, int param);

void update_parameter();
void update_name();
void update_cursor();
void update_battery();
