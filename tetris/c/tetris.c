#include <locale.h>
#include <ncurses.h>

int main()
{
    setlocale( LC_ALL, "" );   
    initscr();          /* Start curses mode          */
    printw("Hello World !!!");  /* Print Hello World          */
    mvaddstr(5, 10, "〠");
    mvaddstr(5, 12, "〠");
    mvaddstr(4, 11, "〠");
    mvaddstr(6, 11, "〠");
    refresh();          /* Print it on to the real screen */
    getch();            /* Wait for user input */
    endwin();           /* End curses mode        */

    return 0;
}
