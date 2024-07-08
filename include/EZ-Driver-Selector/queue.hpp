/*
This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "driver_selector.hpp"

struct controllerScreenQueue {
  std::uint8_t line;
  std::uint8_t col;
  std::string str;
};

void queue_add(std::uint8_t line, std::uint8_t col, std::string str);
void queue_iterate();
void queue_clear_line(std::uint8_t line);
void queue_clear_screen();
