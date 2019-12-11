#pragma once
#include "Ship.h"
class PatrolBoat :
	public Ship
{
	ushort getSize() { return 1; }
	std::string getName() { return "Patrol Boat"; }
public:
	PatrolBoat();
	~PatrolBoat();
};


