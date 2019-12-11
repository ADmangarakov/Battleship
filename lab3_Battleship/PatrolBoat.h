#pragma once

class Game::Ship::PatrolBoat :
	public Ship
{
	ushort getSize() { return 1; }
	std::string getName() { return "Patrol Boat"; }
public:
	PatrolBoat();
	~PatrolBoat();
};



Game::Ship::PatrolBoat::PatrolBoat()
	:Ship(getSize())
{
}


Game::Ship::PatrolBoat::~PatrolBoat()
{
}
