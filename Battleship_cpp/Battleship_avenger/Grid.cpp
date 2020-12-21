#include<iostream>
#include"Grid.hpp"

Grid::Grid(void)
 :gridRows(5),gridCols(5)
{
  std::cout<<"Grid consturctor called"<< "rows:"<< gridRows << ","<< "cols:"<< gridCols<<std::endl;    
}

Grid::~Grid(void)
{

  std::cout<<"Grid Destructor called"<<std::endl;
    
}

void Grid::setDimension(int row, int col)
{
    
    gridRows = row;
    gridCols = col;
    
    
};