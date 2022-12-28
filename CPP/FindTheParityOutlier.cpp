/*
Find The Parity Outlier

You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N.

Examples
[2, 4, 0, 100, 4, 11, 2602, 36]
Should return: 11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21]
Should return: 160 (the only even number)

 Solution made by Ivan Kosiakov on 28/12/2022
*/

int FindOutlier(std::vector<int> arr)
{
  int oddCounter = 0, evenCounter = 0, shouldFound;
  
  for (int i = 0; i < arr.size(); i++ ) // Counting all the evens and odds
    if (arr[i] % 2 == 0)
      evenCounter++;
    else
      oddCounter++;
  
  
  // Checking which type of number is the single one in the array
  if (evenCounter == 1)
    shouldFound = 0;
  else shouldFound = 1;
  
  // Trying to found this type in array
  // NOTE: If number is odd and negative then arr[i] % 2 will give -1 not 1! So we should make some extra check
  for (int i = 0; i < arr.size(); i++ )
    if (arr[i] % 2 == shouldFound || (-arr[i] % 2 == shouldFound))
      return arr[i];
}
