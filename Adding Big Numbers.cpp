/*We need to sum big numbers and we require your help.

Write a function that returns the sum of two numbers. The input numbers are strings and the function must return a string.
Example

add("123", "321"); -> "444"
add("11", "99");   -> "110"

Notes

    The input numbers are big.
    The input is a string of only digits
    The numbers are positives

*/
#include <string>

int fromstring(char num)
  {
  if(num=='0')return 0;
  else if(num=='1')return 1;
  else if(num=='2')return 2;
  else if(num=='3')return 3;
  else if(num=='4')return 4;
  else if(num=='5')return 5;
  else if(num=='6')return 6;
  else if(num=='7')return 7;
  else if(num=='8')return 8;
  else return 9;
}

std::string add(const std::string& a, const std::string& b) {
  std::string c=a,d=b;
  std::string res="";
  int num1=0,num2=0,reszta=0;

  while(c.length()>0&&d.length()>0)
    {
    num1=fromstring(c[c.length()-1]);
     num2=fromstring(d[d.length()-1]);
     res=std::to_string((num1+num2+reszta)%10)+res;
     if(num1+num2+reszta>=10){reszta=1;}
     else reszta=0;
     c=c.substr(0,c.length()-1);
     d=d.substr(0,d.length()-1);}
  while(c.length()>0){
    num1=fromstring(c[c.length()-1]);
    res=std::to_string((num1+reszta)%10)+res;
     if(num1+reszta>=10){reszta=1;}
     else reszta=0;
     c=c.substr(0,c.length()-1);
  }
  while(d.length()>0){
    num2=fromstring(d[d.length()-1]);
    res=std::to_string((num2+reszta)%10)+res;
     if(num2+reszta>=10){reszta=1;}
     else reszta=0;
     d=d.substr(0,d.length()-1);
  }
  if(reszta==1)res="1"+res;
  
  return res;
  
  
}
