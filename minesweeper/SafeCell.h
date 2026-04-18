#pragma once
#ifndef SAFECELL_H
#define SAFECELL_H
#include <iostream>
#include "windows.h"
#include "Cell.h"

class SafeCell : public Cell {

public:

	SafeCell() = default;
	SafeCell(int x, int y);

private:

};

#endif