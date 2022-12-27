/*
Convert string to camel case

Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). The next words should be always capitalized.

Examples
"the-stealth-warrior" gets converted to "theStealthWarrior"
"The_Stealth_Warrior" gets converted to "TheStealthWarrior"

 Solution made by Ivan Kosiakov on 27/12/2022
*/

#include <string>


std::string to_camel_case(std::string text) {
  std::string returnString = ""; // Saving characters for a special string
  
  for(int i = 0; i < text.length(); i++) {
    if(text[i+1] == '-' || text[i+1] == '_'){
      returnString += text[i];
      text[i+2] = toupper(text[i+2]); // Making character after slash upper
      i++; // Skipping spot of - ( or _ )
    } else returnString += text[i];
  }
  return returnString;
}
