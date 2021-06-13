

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


