/*
Sudoku Background

Sudoku is a game played on a 9x9 grid. The goal of the game is to fill all cells of the grid with digits from 1 to 9, so that each column, each row, and each of the nine 3x3 sub-grids (also known as blocks) contain all of the digits from 1 to 9.
(More info at: http://en.wikipedia.org/wiki/Sudoku)
Sudoku Solution Validator

Write a function validSolution/ValidateSolution/valid_solution() that accepts a 2D array representing a Sudoku board, and returns true if it is a valid solution, or false otherwise. The cells of the sudoku board may also contain 0's, which will represent empty cells. Boards containing one or more zeroes are considered to be invalid solutions.

The board is always 9 cells by 9 cells, and every cell only contains integers from 0 to 9.
*/


bool validSolution(unsigned int board[9][9]){
  int is[9]={0,0,0,0,0,0,0,0,0};
  for(int i=0;i<9;++i){
    for(int j=0;j<9;++j)
      {if(board[i][j]==0)return false;
      is[board[i][j]-1]++;}      
    for(int j=0;j<9;++j){
      if (is[j]!=1)return false;
      else is[j]=0;
    }}
  for(int i=0;i<9;++i){
    for(int j=0;j<9;++j)is[board[j][i]-1]++;
    for(int j=0;j<9;++j){
      if (is[j]!=1)return false;
      else is[j]=0;
    }}
  for(int a=0;a<3;a++){
    for(int b=0;b<3;b++){
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          is[board[3*a+i][3*b+j]-1]++;
        }}
      for(int j=0;j<9;++j){
      if (is[j]!=1)return false;
      else is[j]=0;
        }
    }}
   return true;
}
