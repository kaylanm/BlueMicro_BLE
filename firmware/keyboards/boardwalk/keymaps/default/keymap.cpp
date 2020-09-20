/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

#define LAYR_1  LAYER_1
#define SU_TAB  LGUI(KC_TAB)
#define SU_SH_H LGUI(LSFT(KC_H))

/* Base Layer
    * .-----------------------------------------------------------------------------------------------------------------------------.
    * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
    * | TAB    | Q      | W      | F      | P      | G      | [      | ]      | J      | L      | U      | Y      | ;      | '      |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
    * | LCTRL  | A      | R      | S      | T      | D      |        |        | H      | N      | E      | I      | O      | ENTER  |
    * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
    * | LSHIFT | Z      | X      | C      | V      | B      | S TAB  | S S H  | K      | M      | ,      | .      | /      | RSHIFT |
    * '--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------'
    *          | CAPS   | FN     | LALT   | LGUI   |      SPACE      |      SPACE      | LEFT   | DOWN  | UP      | RIGHT  |
    *          '-----------------------------------------------------------------------------------------------------------'
    */
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix = KEYMAP2ARRAY(KEYMAP(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_LBRC, KC_RBRC, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
    KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    SU_TAB,  SU_SH_H, KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
             KC_CAPS, LAYER_1, KC_LALT, KC_LGUI,          KC_SPC,  KC_SPC,           KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
));


void setupKeymap() {
    #define CL_BOND CLEAR_BONDS
    #define OUT_AUT OUT_AUTO

    /* Function Layer
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | `      | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | DEL    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | DFU    |        | MENU   |        |        |        |        |        |        |        |        |        | PRT SC |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * |        | OUT BT | OUTUSB | OUTAUT | CLBOND |        |        |        |        |        |        |        |        | RESET  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * |        |        |        |        |        |        |        |        |        | MUTE   | VOL DN | VOL UP | \      |        |
     * '--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------'
     *          |        |        |        |        |                 |                 |        |        |        |        |
     *          '-----------------------------------------------------------------------------------------------------------'
     */
    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        DFU,     _______, KC_APP,  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______,
        _______, OUT_BT,  OUT_USB, OUT_AUT, CL_BOND, _______,                   _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_BSLS, _______,
                 _______, _______, _______, _______,          _______, _______,          _______, _______, _______, _______
    );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
        }
    }

}

