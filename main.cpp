// C1 Pgm 2 Arithmetic Operations
// Demonstrates arithmetic operations with variables

#include <iostream>
using namespace std;

int main()
{
	cout << "♦ ♦ ♦ ♦ ♦ Arithmetic Operations ♦ ♦ ♦ ♦ ♦\n";
    
	unsigned int upoints = 700;
	cout << "\nInitial Points : " << upoints ;
	
//altering the value of a variable
	upoints = upoints + 100;
	cout << "\nAdded Points   : " << upoints ;

//combined assignment operator
	upoints -= 50;
	cout << "\nSubtract Points: " << upoints ;

//increment operators

	cout << "\n\nLevel 1 points: " << upoints ;

	++upoints;
	cout << "\nLevel 2 points: "   << upoints ;
	
	upoints++;
	cout << "\nLevel 3 points: "   << upoints ;

	int bonus = ++upoints * 10;
	cout <<  "\npoints, bonus = " << upoints << ", " << bonus ;

	bonus = upoints++ * 10;
	cout << "\npoints, bonus = " << upoints << ", " << bonus ;

//integer wrap around
	unsigned int score = 4294967295;
	cout << "\n\nOriginal score   : " << score ;
	++score;
	cout << "\nRolled over score: "   << score ;
	--score;
	cout << "\nRollback ☺ score : "   << score << endl;

    cout << "\n\nEnd of Program";
    return 0;
}