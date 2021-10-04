/* Copyright 2021 ryan scott
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


Row Pins
D3, B0, B2, D0
Col Pins
D6, B7, B6, B5, B4
Convert
#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT stream_deck( \
    k00, k31, k32, k33, k34,  \
    k10, k11, k12, k13, k14,  \
    k20, k21, k22, k23, k24, 
){ \
    { k00, ___, ___, ___, ___ },  \
    { k10, k11, k12, k13, k14 },  \
    { k20, k21, k22, k23, k24 },  \
    { ___, k31, k32, k33, k34 }, 
}
