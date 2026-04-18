#pragma once
#ifndef CELL_H
#define CELL_H
#include <iostream>
#include "windows.h"

class Cell {

public:
	int coordinates_X;
	int coordinates_Y;
	bool isOpened = false;
	char glyph = '_'; 

	Cell(int x, int y);
	Cell() = default;

	/*void open(); */
};

#endif
