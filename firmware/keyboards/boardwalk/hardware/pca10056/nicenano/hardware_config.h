/*
Copyright 2020 <Pierre Constantineau>

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
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"

/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define GPIO(port, pin) ((port << 5) | pin)

/* key matrix pins */
#define MATRIX_ROW_PINS { \
    GPIO(0, 6),  \
    GPIO(0, 8),  \
    GPIO(0, 17), \
    GPIO(0, 20), \
    GPIO(0, 22), \
}

#define MATRIX_COL_PINS { \
    GPIO(0, 24), \
    GPIO(1, 0),  \
    GPIO(0, 11), \
    GPIO(1, 4),  \
    GPIO(1, 6),  \
    GPIO(0, 31), \
    GPIO(0, 29), \
    GPIO(0, 2),  \
    GPIO(1, 15), \
    GPIO(1, 13), \
    GPIO(1, 11), \
    GPIO(0, 10), \
    GPIO(0, 9),  \
    GPIO(1, 1),  \
}

#define UNUSED_PINS {}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


#endif /* HARDWARE_CONFIG_H */