// Basic Input/Output, by Wafaa Wardah

/* 
	Ask the user for their name, phone and email address
	and print it out.
*/

#include <iostream>
using namespace std;

int main() 
{
    string name, mobile_number, email_address;
    cout << "Please enter your name:";
    cin >> name;
    cout << "Please enter your mobile phone number:";
    cin >> mobile_number;
    cout << "Please enter your email address:";
    cin >> email_address;
    cout << "\n\nDear " << name << endl;
    cout << "You are invited to my public lecture next Friday.\n";
    cout << "\nYour details:\nMobile number: " << mobile_number << 
			"\nEmail address: " << email_address << endl;
    return 0;
}
