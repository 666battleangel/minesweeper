#include <iostream>
#include <vector>
#include "Cell.h"
#include "SafeCell.h"
#include <cstdlib>
#include <ctime>

int main() 
{
	srand(std::time(NULL)); 

	int max_x;
	int max_y;
	int mineAmount;

	std::cout << "What dimensions would you like to use? Enter x: ";
	std::cin >> max_x;
	std::cout << "What dimensions would you like to use? Enter y: ";
	std::cin >> max_y;
	if (max_y <= 0 || max_x <= 0)
	{
		while (max_y <= 0 || max_x <= 0)
		{
			std::cout << "Error! Enter another value for x: ";
			std::cin >> max_x;

			std::cout << "Error! Enter another value for y: ";
			std::cin >> max_y;
		}
	}

	std::cout << "Enter number of mines: ";
	std::cin >> mineAmount;
	if (mineAmount > (max_x * max_y) - 1 || mineAmount <= 0)
	{
		while (mineAmount > (max_x * max_y) - 1 || mineAmount <= 0)
		{
			std::cout << "Error! Enter another value: ";
			std::cin >> mineAmount;
		}
	}
	
	std::vector<std::vector<Cell>> map/*(max_y, std::vector<Cell>(max_x, new Cell())*/;

	for (int i = 0; i < max_y; i++)
	{
		std::vector<Cell> innerVector;
		for (int j = 0; j < max_x; j++)
		{
			Cell cell = Cell(j, i);
			innerVector.push_back(cell);
		}
		map.push_back(innerVector); 
	}

	for (int i = 0; i < max_y; i++)
	{
		for (int j = 0; j < max_x; j++)
		{
			std::cout << map[j][i].glyph;
		}
		std::cout << '\n';
	}
	
	int x;
	int y; 

	std::cout << "Please enter starting coordinates: " << '\n';
	std::cin >> x; 
	std::cin >> y;
	if (y <= 0 || y > max_y || x <= 0 || x > max_x)
	{
		while (y <= 0 || y > max_y || x <= 0 || x > max_x)
		{
			std::cout << "Error! Enter another value for x: ";
			std::cin >> x;

			std::cout << "Error! Enter another value for y: ";
			std::cin >> y;
		}
	}

	SafeCell firstSafeCell = SafeCell(x, y);
	map[x][y] = firstSafeCell; 
}

// first x y is safe cell
// mines are randomized with x and y mines = mineAmount
// not mine = safe cell, n = num of mines in radius 3x3 