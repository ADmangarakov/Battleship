#pragma once

class Game::Ship::Battleship :
	public Ship
{
	ushort getSize() { return 4; }
	std::string getName() { return "Battleship"; }
public:
	Battleship();
	~Battleship();
};



Game::Ship::Battleship::Battleship()
	:Ship(getSize())
{
}


Game::Ship::Battleship::~Battleship()
{
}
