// Arithmetic, by Wafaa Wardah

/*	Write a program that asks the user for 2 numbers, x & y, and then display the answer for 
	x . y . (y + x)
*/

#include <iostream>
using namespace std;

int main() 
{
    int x, y, z;
    cout << "Please enter a number:\t\t";
    cin >> x;
    cout << "Please enter another number:\t";
    cin >> y;
    z = x * y * (y + x);
    cout << endl << x << " x " << y << " x (" << y << " + " << x << ") = " << z << endl;
    return 0;
}
