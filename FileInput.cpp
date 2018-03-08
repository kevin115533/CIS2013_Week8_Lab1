#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int one, two, three, four;
	char cont = 'y';
	ifstream in_a;

	in_a.open("numbers.dat");
	if (in_a.fail()) {
		cout << "Something reall awful has happened with numbers.dat";
		exit(1);
	}

	in_a >> one >> two >> three >> four;

	cout << "Our previous numbers are " << one << " ";
	cout << two << " " << three << " ";
	cout << four;

	in_a.close();

	return 0;
}