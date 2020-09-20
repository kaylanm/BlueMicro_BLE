/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"
#define KEYBOARD_SIDE SINGLE


#define DEVICE_NAME_R                        "Boardwalk_R"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_L                       "Boardwalk_L"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_M                        "Boardwalk"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "Boardwalk_v1"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "PineappleHugs"                      /**< Manufacturer. Will be passed to Device Information Service. */



#define KEYMAP( \
  k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, \
  k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, \
  k200, k201, k202, k203, k204, k205,             k208, k209, k210, k211, k212, k213, \
  k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313, \
        k401, k402, k403, k404,    k406,       k407,    k409, k410, k411, k412        \
) \
{ \
  { k000,  k001, k002, k003,  k004, k005,  k006,  k007,  k008,  k009, k010, k011, k012, k013  }, \
  { k100,  k101, k102, k103,  k104, k105,  k106,  k107,  k108,  k109, k110, k111, k112, k113  }, \
  { k200,  k201, k202, k203,  k204, k205,  KC_NO, KC_NO, k208,  k209, k210, k211, k212, k213  }, \
  { k300,  k301, k302, k303,  k304, k305,  k306,  k307,  k308,  k309, k310, k311, k312, k313  }, \
  { KC_NO, k401, k402, k403,  k404, KC_NO, k406,  k407,  KC_NO, k409, k410, k411, k412, KC_NO }, \
}



#endif /* KEYBOARD_CONFIG_H */
