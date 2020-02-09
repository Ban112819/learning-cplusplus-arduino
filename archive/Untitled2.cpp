#include<iostream>

using namespace std;
int main ()
{ 
	 char gender;
	cout << "Please enter your gender (F/M): ";
	cin >> gender;
	
	if (gender == 'M') { 
		cout<< "You are a male. ";
	}
	else if (gender == 'F') {
		cout << "You are a female. ";
	}
	else {
		cout << "You are gay. ";
	}
}
