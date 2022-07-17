/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in. Additionally, if the number is negative, return 0 (for languages that do have them).

Note: If the number is a multiple of both 3 and 5, only count it once.
*/

int solution(int number) 
{
    if (number<=0)return 0;
  else{
    int sum15,sum5,sum3;
    if (number>15)
    sum15=(((int)((number-1)/15)+1)*(int)((number-1)/15))/2*15;
    else sum15=0;
    if (number>5)
    sum5=(((int)((number-1)/5)+1)*(int)((number-1)/5))/2*5;
    else sum5=0;
    if (number>3)
    sum3=(((int)((number-1)/3)+1)*(int)((number-1)/3))/2*3;
    else sum3=0;
    return sum3+sum5-sum15;
  }
}
