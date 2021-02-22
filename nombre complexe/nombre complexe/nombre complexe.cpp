// nombre complexe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "complexe.h"

int main()
{
	complexe a(1, 3), b(2, 7), c;
	cout << "Complexe A = ";
	a.afficher();
	cout << "Le module de A est : " << a.module() << endl;
	cout << "Le conjugue de A est : ";
	a.conjugue().afficher();

	cout << "A = ";
	a.afficher();
	cout << "B = ";
	b.afficher();

	cout << "A + B = ";
	c = (a + b);
	c.afficher();

	cout << "A + 12 = ";
	c = (a + 12);
	c.afficher();

	cout << "A * B = ";
	c = (a * b);
	c.afficher();

	cout << "B - A = ";
	c = (b - a);
	c.afficher();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
