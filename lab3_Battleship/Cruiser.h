#pragma once
#include "Ship.h"
class Cruiser :
	public Ship
{
	ushort getSize() { return 3; }
	std::string getName() { return "Cruiser"; }
public:
	Cruiser();
	~Cruiser();
};



