/*
Beginner Series #3 Sum of Numbers

Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.

Note: a and b are not ordered!

Examples (a, b) --> output (explanation)
(1, 0) --> 1 (1 + 0 = 1)
(1, 2) --> 3 (1 + 2 = 3)
(0, 1) --> 1 (0 + 1 = 1)
(1, 1) --> 1 (1 since both are same)
(-1, 0) --> -1 (-1 + 0 = -1)
(-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)

 Solution made by Ivan Kosiakov on 27/12/2022
*/

int get_sum(int a, int b)
{
  int sum = 0;
  if (b < a) { // Swap of numbers for lower 
    int c = a; a = b; b = c;
  }
  for (int i = a; i <= b; i++) // Sum of all numbers between
    sum += i;
  return sum;
}
