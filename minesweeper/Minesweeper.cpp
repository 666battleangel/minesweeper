#include <iostream>
#include <vector>
#include "Cell.h"

int main() 
{
	int max_x;
	int max_y;
	std::cout << "What dimensions would you like to use? Enter x: ";
	std::cin >> max_x;
	std::cout << "What dimensions would you like to use? Enter y: ";
	std::cin >> max_y;
	
	std::vector<std::vector<Cell>> map(max_y, std::vector<Cell>(max_x));

	for (int i = 0; i < max_y; i++)
	{
		for (int j = 0; j < max_x; j++)
		{
			Cell cell = Cell(i, j);
			map[j][i] = cell;
			std::cout << map[j][i].glyph; 
		}
	}

}
