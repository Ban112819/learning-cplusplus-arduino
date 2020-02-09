#include <iostream>

int main() {
  double earth_weight;
  std::cout << "Enter your earth weight (kg) : ";
  std::cin >> earth_weight;
  
   std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";
  
  int destination = 0;
  std::cout <<"Enter destination number: ";
  std::cin >> destination;
  
  double relative_gravity;
  
switch (destination){
    
  case 1 : //Venus
    relative_gravity = 0.78;
    break;
  case 2 : //Mars
    relative_gravity = 0.39;
    break;
  case 3 : //Jupiter
    relative_gravity = 2.65;
    break;
  case 4 : //Saturn
    relative_gravity = 1.17;
    break;
  case 5 : //Uranus
    relative_gravity = 1.05;
    break;
  case 6 : //Neptune
    relative_gravity = 1.23;
    break;
}
  
  double weight = earth_weight * relative_gravity;
  std::cout << "Weight = " << weight << "kg.";
  
}
  
  
  
  
  
  
  
  
  
  
  
  

  
  
  
  

  
  
  
  
  
  
  
  
  
  
  
  
  

  

  
  
  
  
  
  
  
  
  
  
  
  
  

