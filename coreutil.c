//
// Created by D Rimron-Soutter on 23/07/2018.
//

#include <stdbool.h>
#include <input.h>
#include <intrinsic.h>
#include <stdio.h>

#include "coreutil.h"

int wait_for_key(int keycode) {
    int inkey = 0;

    while(true) {
        if (in_inkey() == keycode) {
            break;
        }
    }

    return inkey;
}
