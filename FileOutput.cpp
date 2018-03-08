#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	int number;
	ofstream out_a;
	char cont = 'y';

	out_a.open("number.dat");
	if (out_a.fail()) {
		cout << "unable to open file numbers.dat" << endl;
		return 1;
	}

	while (cont == 'y') {
		cout << "Type a number to save to the file" << endl;
		cin >> number;

		out_a << number << " ";

		cout << "Type another number? y/n" << endl;
		cin >> cont;
	}

	return 0;
}
