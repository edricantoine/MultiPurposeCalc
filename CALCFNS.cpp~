

void conv_between_temps() {
  std::string from;
  std::string to;
  double tempToConvert;
  double ktoc, ctok, ktof, ftok, ctof, ftoc;

  std::cout << "What scale would you like to convert from? Enter c, f, or k\n";
  std::cin >> from;

  std::cout << "What scale would you like to convert to? Enter c, f, or k\n";
  std::cin >> to;

  std::cout << "Enter temperature in numbers here:\n";
  std::cin >> tempToConvert;
  

   ktoc = tempToConvert - 273.15;
   ctok = tempToConvert + 273.15; 
   ktof = ((tempToConvert - 273.15) * (9/5)) + 32;
   ftok = ((tempToConvert - 32) * (5/9)) + 273.15;
   ctof = (tempToConvert * (9/5)) + 32;
   ftoc = (tempToConvert - 32) * (5/9); 



  if(from == "k" && to == "c") {

    std::cout << ktoc << "\n";
    return;
    

  } else if(from == "c" && to == "k") {

      std::cout << ctok << "\n";
     return;
   


  } else if(from == "k" && to == "f") {

     std::cout << ktof << "\n";
    return;

  } else if(from == "f" && to == "k") {

    std::cout << ftok << "\n";
    return;

  } else if(from == "c" && to == "f") {

    std::cout << ctof << "\n";
    return;

  } else if(from == "f" && to == "c") {

    std::cout << ftoc << "\n";
    return;

  } else {

    std::cout << "An error occurred. Please try again.\n";
    return;

  }

 

  

}

void bmi_calc() {

  double height;
  double weight;
  double bmi;
  double h2;

  std::cout << "Enter your weight in KILOGRAMS:\n";
  std::cin >> weight;

  std::cout << "Enter your height in METRES:\n";
  std::cin >> height;

  h2 = (height * height);
  bmi = weight / h2;

  if(bmi < 18.5) {

    std::cout << "Your BMI is " << bmi << ". You are underweight.\n";
    return;
    
  } else if (bmi >=  18.5 && bmi < 25) {

     std::cout << "Your BMI is " << bmi << ". You are normal.\n";
     return;
    
  } else if (bmi >=  25 && bmi < 30) {

     std::cout << "Your BMI is " << bmi << ". You are overweight.\n";
     return;
    
  } else if (bmi >=  30 && bmi < 35) {

     std::cout << "Your BMI is " << bmi << ". You are obese.\n";
     return;
    
  } else if (bmi >= 35) {

     std::cout << "Your BMI is " << bmi << ". You are extremely obese.\n";
     return;
    
  }


}


