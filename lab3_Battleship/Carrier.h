#pragma once
class Game::Ship::Carrier :
	public Game::Ship
{
	ushort getSize() { return 5; }
	std::string getName() { return "Carrier"; }
public:
	Carrier();
	~Carrier();
};



Game::Ship::Carrier::Carrier()
	:Ship(getSize())
{
}


Game::Ship::Carrier::~Carrier()
{
	
}
