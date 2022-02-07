#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int in1, in2;

	cout << "Enter a number: ";
	cin >> in1;

	cout << "Enter another number: ";
	cin >> in2;

	cout << endl
		 << "The sum of the two inputs is " << in1 + in2 << endl;

	return 0;
}