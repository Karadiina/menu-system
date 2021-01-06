#include "Menu.h"

int main()
{
    Menu a;
    a.show_menu();
    a.menu_input();
    a.proces_input(a.menu_input());

    return 0;
}