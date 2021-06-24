#include <iostream>
#include "CALCFNS.hpp"

int main(){

  bool rep = true;

  while(rep == true) {

    int choice;
    int cont;

    std::cout << "Welcome to the calculator.\n";
    std::cout << "Type 1 to convert between temperature scales.\n";
    std::cout << "Type 2 to calculate BMI.\n";
    std::cout << "Type 3 to convert between feet and metres.\n";
    std::cout << "Type 4 to convert between pounds and kilograms.\n";

    std::cin >> choice;

    switch(choice) {

    case 1:
      conv_between_temps();
      break;
    case 2:
      bmi_calc();
      break;
    case 3:
      ft_and_m();
      break;
    case 4:
      lb_and_kg();
      break;

    }

    std::cout << "Would you like to keep calculating? Press 1 for yes, press 2 for no.\n";

    std::cin >> cont;

    if(cont == 2) {

      rep = false;

    }

    


    
  

    

  }

  return 0;


}
