#pragma once
class Game::Ship::Cruiser :
	public Ship
{
	ushort getSize() { return 3; }
	std::string getName() { return "Cruiser"; }
public:
	Cruiser();
	~Cruiser();
};



Game::Ship::Cruiser::Cruiser()
	:Ship(getSize())
{
}


Game::Ship::Cruiser::~Cruiser()
{
}
