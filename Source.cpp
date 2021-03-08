#include <iostream>
using namespace std;

int main()
{
	int counter;
	int val1;

	cout << "Enter and integer: ";
	cin >> val1;
	do {
		cout << val1 << endl;
		val1++;
	} while (val1 <= 50);
	
		return 0;
}