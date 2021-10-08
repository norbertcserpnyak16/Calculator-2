#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int szam1;
int szam2;

int main() {

	cout << "Give me a whole number! ";
	cin >> szam1;

	cout << "Give me another whole number! ";
	cin >> szam2;

	cout << ":Results of the addition " << szam1 + szam2 << endl; 
	cout << "Results of the extraction: " << szam1 - szam2 << endl;

	cout << "Results of the multiplication:" << szam1 * szam2 << endl;
	cout << "Results of the division:" << szam1 / szam2 << endl;

	cout << "These are the numbers you gave: " << szam1 << " " << szam2 << endl;

	system("pause");
	return 0;


}
