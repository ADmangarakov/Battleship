#pragma once
#include <cctype>
#include <vector>
#include "Game.h"

class Game::IPlayer
{
	static ushort getShipsCount() { return 10; }
protected:
	IField* myField_;
	IField* enemysField_;
	std::vector<Ship*> ships_;
	static void parseCoord(std::string coord, size_t &x, size_t &y);
	
public:
	class ConsolePlayer;
	class RandomPlayer;
	class OptimalPlayer;

	IPlayer();
	virtual bool makeMove() = 0;
	virtual void arrangeShips() = 0;
	virtual IField* getField();
	virtual void setEnemField(IPlayer* player);
	virtual ~IPlayer();
};

inline void Game::IPlayer::parseCoord(std::string coord, size_t &x, size_t &y)
{
	y = std::tolower(coord[0]) - 'a';
	x = std::atoi(&coord[1]);
	if (y > 9 || y < 0 || x > 9 || x < 0) {
		throw std::exception("Bad input");
	}
}

Game::IPlayer::IPlayer()
	:ships_(getShipsCount())
{
	myField_ = new Field();
	ships_[0] = new Ship::Battleship();

	ships_[1] = new Ship::Cruiser();
	ships_[2] = new Ship::Cruiser();

	ships_[3] = new Ship::Destroyer();
	ships_[4] = new Ship::Destroyer();
	ships_[5] = new Ship::Destroyer();

	ships_[6] = new Ship::PatrolBoat();
	ships_[7] = new Ship::PatrolBoat();
	ships_[8] = new Ship::PatrolBoat();
	ships_[9] = new Ship::PatrolBoat();

}

inline Game::IField* Game::IPlayer::getField()
{
	return myField_;
}

inline void Game::IPlayer::setEnemField(IPlayer * player)
{
	enemysField_ = player->getField();
}

Game::IPlayer::~IPlayer()
{
	delete myField_;
	delete enemysField_;
}

