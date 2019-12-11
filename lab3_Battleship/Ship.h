#pragma once
#include <string>
#include "Game.h"
typedef unsigned short ushort;
class Game::Ship
{
protected:
	virtual ushort getSize() = 0;
	ushort health_;
	ushort len_;
	Ship(size_t health);
public:

	class Battleship;
	class Carrier;
	class Cruiser;
	class Destroyer;
	class PatrolBoat;

	virtual std::string getName() = 0;
	virtual ushort getLenght() { return len_; }
	virtual bool isDead();
	virtual void damageDeck();
	virtual ~Ship();
};

