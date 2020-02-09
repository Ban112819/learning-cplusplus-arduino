#include <iostream>

int main() {
  int year = 0;
  
  while(year < 1000) {
    std::cout << "\nPlease enter a four-digit year: ";
    std::cin >> year;
    if (year >= 1000) 
    if (year % 4 == 0) {
    	std::cout << "The year " << year << " is a leap year \n ";
	}
	else {
		std::cout << "The year is not a leap year \n";
	}
	
}
  }
  

