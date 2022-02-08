#include <iostream>

using namespace std;

int main()
{
	string food = "Pizza";
	string &meal = food;

	cout << food << "\n"; // Outputs Pizza
	cout << meal << "\n"; // Outputs Pizza

	food = "Chicken";
	cout << food << "\n"; // Outputs Pizza
	cout << meal << "\n"; // Outputs Pizza

	if (&food == &meal)
	{
		cout << "meal and food both point to the same value." << endl;
	}
	else
	{
		// If you don't put the & on the line containing "string &meal = food;", this code runs.
		cout << "meal and food do not point to the same variable." << endl;
	}

	return 0;
}