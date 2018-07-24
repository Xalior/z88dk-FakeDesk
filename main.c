/*
 * FakeDesk - A Z88DK project that definitely has nothing to do with ZXDesk.
 *
 *   The purpose of this project is to provide a reduced working example
 *    of how one would implement the pagination of infrequently used executable
 *    code on both Spectrum Classic and Next.
 *
 * Compile for ESXDOS
 *
 * 	zcc +zx -vn -startup=5 -clib=new @FakeDesk.lst -o classic -create-app
 *
 * Compile for NextOS
 *
 * 	zcc +zxn -vn -startup=5 -clib=new @FakeDesk.lst -o next -create-app
 *
 * Also includes Makefile
 */
#include <arch/zx.h>
#include <stdio.h>
#include <input.h>
#include <stdbool.h>
#include "coreutil.h"


static void main_menu() {
    zx_cls(PAPER_WHITE | INK_BLACK);
    printInk(INK_BLACK);
    printPaper(INK_WHITE);
    printAt(20, 2); printf("FakeDesk - Totally not an over ambitious idea for classic & next");

    printAt( 8, 0); printf("< 1 > Markdown Editor");
    printAt( 9, 0); printf("< 2 > Graphics Editor");
    printAt(10, 0); printf("< 3 > Quit FakeDesk");

}

int main()
{

    main_menu();

    int inkey=0;

    while (inkey!=51) {
        inkey = in_inkey();

        switch (inkey) {
            case 49:
                markdown_start();
                main_menu();
                break;
            case 50:
                paintbox_start();
                main_menu();
                break;
            case 51:
                break;
            default:
                inkey = 0;
        }
    }
}