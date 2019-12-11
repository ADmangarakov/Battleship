#pragma once
#include "Ship.h"

class Carrier :
	public Ship
{
	ushort getSize() { return 5; }
	std::string getName() { return "Carrier"; }
public:
	Carrier();
	~Carrier();
};




