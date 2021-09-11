#include <iostream>
using namespace std;

int main()
{
	int numvar;
	cout << "Enter the number of variants" << endl;
	cin >> numvar;

	string name;
	cout << "Enter a name" << endl;
	cin >> name;

	int var = name[0] % numvar + 1; //name[0] - code of the 1st letter in ASCII
	cout << "Your variant - " << var;
}
