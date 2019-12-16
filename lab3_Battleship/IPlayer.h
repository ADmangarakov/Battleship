#pragma once
#include <cctype>
#include "Field.h"

#include "Ship.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "PatrolBoat.h"

class IPlayer
{
protected:
	size_t id_;
	Ship* ships_[10];
	static ushort getShipsCount() { return 10; }
	IField* myField_;
	IField* enemysField_;
	static void parseCoord(std::string coord, size_t &x, size_t &y);
	
public:
	IPlayer(size_t id);
	virtual bool attack() = 0;
	virtual void arrangeShips() = 0;
	virtual bool replyToEnemy(size_t x, size_t y);
	virtual size_t getId();
	virtual ~IPlayer();
};


