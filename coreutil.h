//
// Created by D Rimron-Soutter on 23/07/2018.
//

#ifndef FAKEDESK_COREUTIL_H
#define FAKEDESK_COREUTIL_H

#define printAt(row, col)           printf("\x16%c%c", (col)+1, (row)+1)
#define printInk(k)                 printf("\x10%c", '0'+k)
#define printPaper(k)               printf("\x11%c", '0'+k)

// common constants

#define INK_BLACK                   0x00
#define INK_BLUE                    0x01
#define INK_RED                     0x02
#define INK_MAGENTA                 0x03
#define INK_GREEN                   0x04
#define INK_CYAN                    0x05
#define INK_YELLOW                  0x06
#define INK_WHITE                   0x07

#define PAPER_BLACK                 0x00
#define PAPER_BLUE                  0x08
#define PAPER_RED                   0x10
#define PAPER_MAGENTA               0x18
#define PAPER_GREEN                 0x20
#define PAPER_CYAN                  0x28
#define PAPER_YELLOW                0x30
#define PAPER_WHITE                 0x38

int wait_for_key(int keycode);

#endif //FAKEDESK_COREUTIL_H
