/*
Remove the parentheses

In this kata you are given a string for example:

"example(unwanted thing)example"

Your task is to remove everything inside the parentheses as well as the parentheses themselves.

The example above would return:

"exampleexample"

Notes
  Other than parentheses only letters and spaces can occur in the string. Don't worry about other brackets like "[]" and "{}" as these will never appear.
  There can be multiple parentheses.
  The parentheses can be nested.
  
 Solution made by Ivan Kosiakov on 24/12/2022
*/

#include <string>

std::string remove_parentheses(const std::string &str)
{
    std::string withoutParentheses; // String that is going to contain only symbols out of brackets
    int bracketsCounter = 0; // If negative - inside, if zero - no brackets, positive - error
    int mainStringPosition = 0; // Position of the copied string (only symbols out of brackets)
  
    // Loop to go through string that was pointed
    for (int i = 0; i < str.length(); i++) {
      while (str[i] == '(' || str[i] ==')') {
        if (str[i] == '(')
          bracketsCounter--;
        else if (bracketsCounter < 0 && str[i] == ')') {
          bracketsCounter++;
        }
        
        i++; // Moving string position by one to skip brackets
      };

      if (bracketsCounter == 0) {
        if(str[i]) {
        withoutParentheses += str[i]; 
        mainStringPosition++;
        }
      }
    }
  
    return withoutParentheses;
}
