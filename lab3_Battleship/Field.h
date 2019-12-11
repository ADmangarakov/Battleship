#pragma once
#include <algorithm>
#include <vector>
#include "Game.h"
class Game::Field :
	public IField
{
	std::vector<std::vector<Ship *>> field_;
	std::vector<std::vector<ushort>> canvas_;

	void normCoord(size_t& head, size_t& tail);
public:
	Field();
	bool tryCell(size_t x, size_t y);
	bool setShip(Ship * ship, size_t x_head, size_t y_head, size_t x_tail, size_t y_tail);
	Ship* checkCell(size_t x, size_t y);
	~Field();
};

