/*
Some numbers have funny properties. For example:

    89 --> 8¹ + 9² = 89 * 1

    695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2

    46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

Given a positive integer n written as abcd... (a, b, c, d... being digits) and a positive integer p

    we want to find a positive integer k, if it exists, such that the sum of the digits of n taken to the successive powers of p is equal to k * n.

In other words:

    Is there an integer k such as : (a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ...) = n * k

If it is the case we will return k, if not return -1.

Note: n and p will always be given as strictly positive integers.

*/

class DigPow
{
public:
  static int pow(int basic,int power){int res=1;for(int i=0;i<power;i++){res*=basic;}return res;}
  static int getSize(int N){
    int size=1;
    while(N>=10){size++;N/=10;}
    return size;}
  static int getNumber(int N,int p){
    int size=getSize(N);
    int sum=0;
    for(int i=0;i<size;i++){sum+=pow(N%10,(p+size-i-1));N=(N-N%10)/10;}return sum;}    
  
  static int digPow(int n, int p)
  {
      int sum=getNumber(n,p);
    if(sum%n==0)return sum/n;
    else return -1;
  }
};
