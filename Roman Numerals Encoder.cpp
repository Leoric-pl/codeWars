/*Create a function taking a positive integer as its parameter and returning a string containing the Roman Numeral representation of that integer.

Modern Roman numerals are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero. 
In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 is written as 2000=MM, 8=VIII; or MMVIII. 
1666 uses each Roman symbol in descending order: MDCLXVI.

*/


#include <string>
std::string solution(int number){
  std::string res="";
  for(;number>=1000;number-=1000,res+="M");
  if(number>=900){number-=900;res+="CM";}
  if(number>=500){number-=500;res+="D";}
  if(number>=400){number-=400;res+="CD";}
  for(;number>=100;number-=100,res+="C");
  if(number>=90){number-=90;res+="XC";}
  if(number>=50){number-=50;res+="L";}
  if(number>=40){number-=40;res+="XL";}
  for(;number>=10;number-=10,res+="X");
  if(number>=9){number-=9;res+="IX";}
  if(number>=5){number-=5;res+="V";}
  if(number>=4){number-=4;res+="IV";}
  for(;number>=1;number-=1,res+="I");
  return res;
}
