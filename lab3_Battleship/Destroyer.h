#pragma once
class Game::Ship::Destroyer :
	public Ship
{
	ushort getSize() { return 2; }
	std::string getName() { return "Destroyer"; }
public:
	Destroyer();
	~Destroyer();
};


Game::Ship::Destroyer::Destroyer()
	:Ship(getSize())
{
}


Game::Ship::Destroyer::~Destroyer()
{
}
