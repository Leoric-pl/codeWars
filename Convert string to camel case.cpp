/*
Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case).
Examples

"the-stealth-warrior" gets converted to "theStealthWarrior"
"The_Stealth_Warrior" gets converted to "TheStealthWarrior"
*/

#include <string>


std::string to_camel_case(std::string text) {
  int nextu=text.find("_");
  int nextd=text.find("-");
  int next;
  if(nextu>=0&&(nextu<nextd||nextd==-1))next=nextu;else next=nextd;
  std::string res="";
  while(next>=0){
    res+=text.substr(0,next); 
    text=text.substr(next+1);
    nextu=text.find("_");nextd=text.find("-");
    if(nextu>=0&&(nextu<nextd||nextd==-1))next=nextu;else next=nextd;
    if(text[0]>=97&&text[0]<=122)text[0]-=32;
    }
  res+=text;
  return res;
}
