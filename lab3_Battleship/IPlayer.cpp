#include "pch.h"
#include "IPlayer.h"

void IPlayer::parseCoord(std::string coord, size_t &x, size_t &y)
{
	y = std::tolower(coord[0]) - 'a';
	x = std::atoi(&coord[1]);
	if (y > 9 || y < 0 || x > 9 || x < 0) {
		throw std::exception("Bad input");
	}
}

IPlayer::IPlayer(size_t id)
	:id_(id)
{
	ships_[0] = new Battleship();
	
	ships_[1] = new Cruiser();
	ships_[2] = new Cruiser();

	ships_[3] = new Destroyer();
	ships_[4] = new Destroyer();
	ships_[5] = new Destroyer();

	ships_[6] = new PatrolBoat();
	ships_[7] = new PatrolBoat();
	ships_[8] = new PatrolBoat();
	ships_[9] = new PatrolBoat();

	myField_ = new Field(id);
}

bool IPlayer::replyToEnemy(size_t x, size_t y)
{
	return myField_->checkCell(x, y);
}

size_t IPlayer::getId()
{
	return id_;
}

IPlayer::~IPlayer()
{
	delete myField_;
}
