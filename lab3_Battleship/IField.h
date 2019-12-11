#pragma once
#include <vector>
#include <string>


class Game::IField
{
public:
	IField();
	virtual ~IField();

	virtual bool tryCell(size_t x, size_t y) = 0;
	virtual Ship* checkCell(size_t x, size_t y) = 0;
	// Set the ship on the field.
	virtual bool setShip(Ship * ship, size_t x_head, size_t y_head, size_t x_tail, size_t y_tail) = 0;
};


