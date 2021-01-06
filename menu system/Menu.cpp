#include "Menu.h"

void Menu::show_menu() {
	std::cout << "1. second converter. " << std::endl;
	std::cout << "2. calculator. " << std::endl;
}
int Menu::menu_input() {
	 int value;
	std::cin >> value;
	return value;

}
void Menu::proces_input(int menu_input()) {
	
	switch ( menu_input()) {
	case 1: {
		void converter();
		break;
	}
	default: {

	}

	}
}
void Menu::converter() {
	int seconds, hours, minutes;
	std::cout << "Give amount of seconds! > " << std::flush;
	std::cin >> seconds;
	minutes = seconds / 60;
	hours = minutes / 60;
	std::cout << seconds << " seconds is equivalent to " << int(hours) << " hours " << int(minutes % 60)
		<< " minutes " << int(seconds % 60) << " seconds.";

}