/*
Sum of Digits / Digital Root

Digital root is the recursive sum of all the digits in a number.

Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing in this way until a single-digit number is produced. The input will be a non-negative integer.

Examples
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2

 Solution made by Ivan Kosiakov on 29/12/2022
*/

int digital_root(int n)
{
  int result = 0, numToSum = n;
  do {
    // Summing digit by digit
    while (numToSum >= 1) { 
      result += numToSum % 10;
      numToSum = numToSum / 10;
    }
    
    // If summed digit is two-digital or more => repeat process
    if (result >= 10) { 
      numToSum = result;
      result = 0;
    }
  } while (numToSum >= 10);

  return result;
}
