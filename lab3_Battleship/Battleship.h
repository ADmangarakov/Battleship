#pragma once
#include "Ship.h"

class Battleship :
	public Ship
{
	ushort getSize() { return 4; }
	std::string getName() { return "Battleship"; }
public:
	Battleship();
	~Battleship();
};



