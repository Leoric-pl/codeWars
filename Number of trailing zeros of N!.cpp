/*
Write a program that will calculate the number of trailing zeros in a factorial of a given number.

N! = 1 * 2 * 3 * ... * N

Be careful 1000! has 2568 digits...

For more info, see: http://mathworld.wolfram.com/Factorial.html
Examples

zeros(6) = 1
# 6! = 1 * 2 * 3 * 4 * 5 * 6 = 720 --> 1 trailing zero

zeros(12) = 2
# 12! = 479001600 --> 2 trailing zeros

*/

//number of 0 is connected to number of 5 and 2...but 2 is VERY often, so just counting 5
//5 are every 5 numbers and in every 5 of them is one more rare
long zeros(long n) {
  long res=0;
  while(n>1)
    {n/=5;
    res+=n;}
  return res;
}
