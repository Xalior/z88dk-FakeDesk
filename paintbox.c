//
// Created by D Rimron-Soutter on 23/07/2018.
//
#include <arch/zx.h>
#include <stdio.h>
#include "paintbox.h"
#include "coreutil.h"

void paintbox_start() {
    paintbox_draw();
    wait_for_key(13);
}

static void paintbox_draw() {
    zx_cls(INK_WHITE | PAPER_CYAN);
    printInk(INK_MAGENTA);
    printPaper(INK_CYAN);
    printf("PAINTBOX. HONEST. PRESS <ENTER> TO QUIT.");
}