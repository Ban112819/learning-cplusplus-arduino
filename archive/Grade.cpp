#include <iostream>

int main() {
  
  double grade;
  
  std::cout << "Enter your grade";
  std::cin >> grade;
  

  {if (grade > 60) {
    
    std::cout << "Pass\n";
  }
  else {
    
    std::cout <<"Fail\n";
  }
}}
