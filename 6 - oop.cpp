#include <iostream>

using namespace std;

class Human
{
public:
	string humans_name;
	int humans_age;

	Human(string name, int age)
	{
		humans_name = name;
		humans_age = age;
	}

	void showAge()
	{
		cout << humans_name << "'s age is " << humans_age << "." << endl;
	}
};

int main()
{
	Human myPerson("Bob", 30);

	myPerson.showAge();

	return 0;
}