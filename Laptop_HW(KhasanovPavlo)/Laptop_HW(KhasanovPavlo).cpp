#include <iostream>
#include "Laptop.h"

int main()
{
	Mouse* mouse = new Mouse("logitech");
	Printer* pr = new Printer("none");
	Laptop laptop("Asus", "TufGaming", "Intel i-5", 8, "Nvidia", "none", mouse, pr);
	laptop.Print();
	laptop.~Laptop();
	cout << endl << "-----------------" << endl;
	mouse->Print();
	pr->Print();
}
