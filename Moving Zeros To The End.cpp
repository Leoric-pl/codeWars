/*
Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.

move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0}

*/
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> table=input,res;
  int zeros=0;
  for(unsigned long i=0;i<table.size();i++)if(table[i]==0)zeros++;
  for(unsigned long i=0;i<table.size();i++)if(table[i]!=0)res.push_back(table[i]);
  for(int i=0;i<zeros;++i)res.push_back(0);
  return res;
}
