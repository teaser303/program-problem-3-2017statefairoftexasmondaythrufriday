/* 
Pranay Srivastava and John Bui- 3rd Period- October 5, 2017
Assignment Name: Three_Digit_Ascend_Descend_Selection
State whether the digits of a 3-digit number are ascending, descending, or neither using stored variables.
*/

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
void main() {
	int x; //**SLIGHTLY EDITED VAR NAME**
	cout << "Enter a positive 3 digit integer : ";
	cin >> x; // 'n' is the variable that stores the three digit number that the user types in.


	for (int i = 0; i < 30; i++) { //**ADDED FOR LOOP FOR 30 REPETITONS**

		int a = x / 100; // Isolates the digit in the 100th's place.
		int b = (x % 100) / 10; // Isolates the digit in the 10th's place.
		int c = x % 10; // Isolates the digit in the 1's place.

		if (a > b && b > c) {
			cout << x << " is Descending" << endl; //**SLIGHTLY EDITED WORDING**
			cout << "Enter another positive 3 digit integer : "; //lets user input another integer
			cin >> x;
		} // If the digits of 'n' are presented in a descending order from left to right, print 'descending'.
		else if (a < b && b < c) {
			cout << x << " is Ascending" << endl;
			cout << "Enter another positive 3 digit integer : ";
			cin >> x;
		} // If the digits of 'n' are presented in a ascending order from left to right, print 'ascending'.
		else {
			cout << x << " is neither Ascending nor Descending" << endl;
			cout << "Enter another positive 3 digit integer : ";
			cin >> x;
		} // If the digits of 'n' aren't presented in either a descending or ascending order from left to right, print 'neither'.
	}
	pause(); // Ends function, prints "Press any key to continue..."
}
