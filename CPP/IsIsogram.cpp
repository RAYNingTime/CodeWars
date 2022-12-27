/*
Isograms

An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)

isIsogram "Dermatoglyphics" = true
isIsogram "moose" = false
isIsogram "aba" = false

 Solution made by Ivan Kosiakov on 27/12/2022
*/

#include <string>

bool is_isogram(std::string str) {
  std::string savedString = "";
  
  for (int i = 0; i < str.length(); i++) {
    str[i] = tolower(str[i]); // Making all characters as lower case
    for (int j = 0; j < savedString.length(); j++) {
      if (str[i] == savedString[j]) // Comparing with all character that was saved
        return false; // If has repeating letters -> false
    }
    savedString += str[i]; // Saving the letters to string to compare later on
  }
  return true; // Otherwise -> true
}
