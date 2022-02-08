#include <iostream>

using namespace std;

// Learnt via the W3 Schools website.
int main()
{
	string food = "Pizza"; // A food variable of type string
	string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

	// Output the value of food (Pizza)
	cout << food << "\n";

	// Output the memory address of food (0x6dfed4)
	cout << &food << "\n";

	// Output the memory address of food with the pointer (0x6dfed4)
	cout << ptr << "\n";

	// Output the value at the pointer
	cout << *ptr << "\n";

	// Output the new value for food, where it has been changed by the pointer
	*ptr = "Hamburger";
	cout << food << endl;

	return 0;
}