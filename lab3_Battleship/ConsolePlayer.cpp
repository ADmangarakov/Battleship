#include "pch.h"
#include "Painter.h"
#include "ConsolePlayer.h"

void ConsolePlayer::arrangeShips()
{
	std::string coord;
	size_t x1, x2, y1, y2;
	size_t i = 0;
	while (i < 10) {
		Painter::printMessage("Set the ", ships_[i]->getName(), ships_[i]->getLenght());
		std::cin >> coord;
		try {
			parseCoord(coord, x1, y1);
			parseCoord(coord.substr(coord.find(" ") + 1), x2, y2);
		}
		catch (const std::exception& e) {
			Painter::printErrMessage(e.what());
			continue;
		}
		if (x1 - x2 == 0) {
			int dif = y1 - y2;
			if (abs(dif) > ships_[i]->getLenght()) {
				Painter::printErrMessage("Bad lenght");
				continue;
			}
		}
		else if (y1 - y2 == 0) {
			int dif = x1 - x2;
			if (abs(dif) > ships_[i]->getLenght()) {
				Painter::printErrMessage("Bad lenght");
				continue;
			}
		}
		else {
			Painter::printErrMessage("Bad coord");
			continue;
		}
		if (!myField_->setShip(ships_[i], x1, y1, x2, y2)) {
			Painter::printErrMessage("Wrong place!");
			continue;
		}
		++i;
	}

}

bool ConsolePlayer::makeMove()
{
	Painter::printMessage("Make your move");
	size_t x, y;
	std::string coord;
	std::cin >> coord;
	while (true) {
		try {
			parseCoord(coord, x, y);
		}
		catch (const std::exception& e) {
			Painter::printErrMessage(e.what()); // bad input
			continue;
		}
		if (!enemysField_->tryCell(x, y)) {
			Painter::printErrMessage("You have already checked this cell! Tyr again");
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


ConsolePlayer::ConsolePlayer()
	:IPlayer()
{
}

ConsolePlayer::~ConsolePlayer()
{
}
