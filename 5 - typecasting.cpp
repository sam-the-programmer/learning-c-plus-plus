#include <iostream>

using namespace std;

int main() {
	float n1 = 1.23;
	int n2 = 3;

	// Original data
	cout << n1 << " " << n2 << endl;

	// Typecasted to the other number type - note that n1 changes to an integer, but n2 doesn't show any 0s after the decimal point
	cout << (int) n1 << " " << (float) n2 << endl;

	return 0;
}