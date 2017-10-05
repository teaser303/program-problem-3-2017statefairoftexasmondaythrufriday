/* 
Pranay Srivastava and John Bui- 3rd Period- October 5, 2017
Assignment Name: Three_Digit_Ascend_Descend_Selection
State whether the digits of a 3-digit number are ascending, descending, or neither using stored variables.
*/

//Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

//Namespaces
using namespace std;

//Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN
void main(){
	int n; 
	cout << "Enter a positive 3 digit integer : ";
	cin >> n; // 'n' is the variable that stores the three digit number that the user types in.

	int a = n / 100; // Isolates the digit in the 100th's place.
	int b = (n % 100) / 10; // Isolates the digit in the 10th's place.
	int c = n % 10; // Isolates the digit in the 1's place.

	if (a > b && b > c) { 
		cout << "Descending" << endl;
	} // If the digits of 'n' are presented in a descending order from left to right, print 'descending'.
	else if (a < b && b < c) {
		cout << "Ascending" << endl;
	} // If the digits of 'n' are presented in a ascending order from left to right, print 'ascending'.
	else {
		cout << "Neither" << endl;
	} // If the digits of 'n' aren't presented in either a descending or ascending order from left to right, print 'neither'.

	pause(); // Ends function, prints "Press any key to continue..."
}