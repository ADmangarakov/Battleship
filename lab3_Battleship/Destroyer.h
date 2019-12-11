#pragma once
#include "Ship.h"
class Destroyer :
	public Ship
{
	ushort getSize() { return 2; }
	std::string getName() { return "Destroyer"; }
public:
	Destroyer();
	~Destroyer();
};



