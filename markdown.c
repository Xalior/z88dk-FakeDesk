//
// Created by D Rimron-Soutter on 23/07/2018.
//

#include <arch/zx.h>
#include <stdio.h>
#include "markdown.h"
#include "coreutil.h"

void markdown_start() {
    markdown_draw();
    wait_for_key(13);
}

static void markdown_draw() {
    zx_cls(INK_WHITE | PAPER_CYAN);
    printInk(INK_MAGENTA);
    printPaper(INK_CYAN);
    printf("MARKDOWN. HONEST. PRESS <ENTER> TO QUIT.");
}
