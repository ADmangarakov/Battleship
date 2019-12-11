#pragma once
#include <cctype>
#include <vector>
#include "Field.h"
#include "Battleship.h"
#include "Carrier.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "PatrolBoat.h"

class IPlayer
{
protected:
	static ushort getShipsCount() { return 10; }
	IField* myField_;
	IField* enemysField_;
	std::vector<Ship*> ships_;
	static void parseCoord(std::string coord, size_t &x, size_t &y);
	
public:
	IPlayer();
	virtual bool makeMove() = 0;
	virtual void arrangeShips() = 0;
	virtual IField* getField() const;
	virtual void setEnemField(IPlayer* player);
	virtual ~IPlayer();
};


