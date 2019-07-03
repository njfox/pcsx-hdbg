//
// PCSX-HDBG - PCSX-based hack debugger
// Copyright (C) 2019  "chekwob" <chek@wobbyworks.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef H__HDBG_PAD__H
#define H__HDBG_PAD__H

#include <SDL.h>

enum {
    PAD_BUTTON_SELECT,
    PAD_BUTTON_L3,
    PAD_BUTTON_R3,
    PAD_BUTTON_START,
    PAD_BUTTON_UP,
    PAD_BUTTON_RIGHT,
    PAD_BUTTON_DOWN,
    PAD_BUTTON_LEFT,
    PAD_BUTTON_L2,
    PAD_BUTTON_R2,
    PAD_BUTTON_L1,
    PAD_BUTTON_R1,
    PAD_BUTTON_TRIANGLE,
    PAD_BUTTON_CIRCLE,
    PAD_BUTTON_X,
    PAD_BUTTON_SQUARE,
    PAD_BUTTON__COUNT
};

void pad_init(void);
void pad_quit(void);

uint16_t pad_getbuttons(void);

void pad_handlekey(SDL_Scancode scancode, int down);

#endif