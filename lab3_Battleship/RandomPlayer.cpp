#include "pch.h"
#include "RandomPlayer.h"
#include "Painter.h"

bool RandomPlayer::makeMove()
{
	srand(time(NULL));
	while (true) {
		size_t x = rand() % 10;
		size_t y = rand() % 10;
		if (!enemysField_->tryCell(x, y)) {
			continue;
		}
		Ship* target = enemysField_->checkCell(x, y);
		if (target != nullptr) {
			target->damageDeck();
			return true;
		}
		return false;
	}
}

void RandomPlayer::arrangeShips()
{
	srand(time(NULL));
	size_t i = 0;
	while (i < getShipsCount()) {
		size_t x1, y1, x2, y2;
		size_t direct = rand() % 2;
		x1 = rand() % 10;
		y1 = rand() % 10;
		if (direct) {
			x2 = x1;
			y2 = y1 + ships_[i]->getLenght() - 1;
		}
		else {
			y2 = y1;
			x2 = x1 + ships_[i]->getLenght() - 1;
		}
		if (!myField_->setShip(ships_[i], x1, y1, x2, y2)) {
			Painter::printErrMessage("Wrong place!");
			continue;
		}
		++i;
	}
}

RandomPlayer::RandomPlayer()
	:IPlayer()
{
}


RandomPlayer::~RandomPlayer()
{
}
