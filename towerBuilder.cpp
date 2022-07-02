/*
Build Tower

Build a pyramid-shaped tower given a positive integer number of floors. A tower block is represented with "*" character.

For example, a tower with 3 floors looks like this:

[
  "  *  ",
  " *** ", 
  "*****"
]

And a tower with 6 floors looks like this:

[
  "     *     ", 
  "    ***    ", 
  "   *****   ", 
  "  *******  ", 
  " ********* ", 
  "***********"
]

*/


#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
  std::vector<std::string> res;
  std::string floor;
  for(unsigned int i=1;i<=nFloors;i++)
    {
    floor="";
    for(unsigned int k=0;k<nFloors-i;k++)floor+=" ";
    for(unsigned int k=0;k<2*i-1;k++)floor+="*";
    for(unsigned int k=0;k<nFloors-i;k++)floor+=" ";
    res.push_back(floor);
  }
  return res;
}
