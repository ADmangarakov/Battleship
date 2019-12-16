#include "pch.h"
#include "Field.h"
#include "Ship.h"

void Field::normCoord(size_t & head, size_t & tail)
{
	if (head < tail) {
		std::swap(head, tail);
	}
}

Field::Field(size_t lead)
	:field_(12, std::vector<Ship* >(12, nullptr))
	, canvas_(12, std::vector<ushort>(12, 0))
	, canvasMap_(12, std::vector<ushort>(12, 0))
	, art_(lead)
{
}

bool Field::tryCell(size_t x, size_t y)
{
	if (canvas_[x][y] == DAMAGED_SEA || canvas_[x][y] == DAMAGED_SHIP) {
		return false;
	}
	return true;
}

bool Field::setShip(Ship * ship, size_t x_head, size_t y_head, size_t x_tail, size_t y_tail)
{
	normCoord(x_head, x_tail);
	normCoord(y_head, y_tail);
	if (x_head == x_tail) {
		size_t cur_y = y_tail;
		while (cur_y <= y_head) {
			if (field_[x_head][cur_y] != nullptr || canvas_[x_head][cur_y] == EMPTY) {
				return false;
			}
			++cur_y;
		}
		cur_y = y_tail;
		while (cur_y <= y_head) {
			field_[x_head][cur_y] = ship;
			++cur_y;
		}
	}
	else {
		size_t cur_x = x_tail;
		while (cur_x <= x_head) {
			if (field_[cur_x][y_head] != nullptr || canvas_[cur_x][y_head] == EMPTY) {
				return false;
			}
			++cur_x;
		}
		cur_x = x_tail;
		while (cur_x <= x_head) {
			field_[cur_x][y_head] = ship;
			++cur_x;
		}
	}
	for (size_t cur_y = y_tail - 1; cur_y < y_tail + 1; cur_y++) {
		for (size_t cur_x = x_tail - 1; cur_x < x_tail + 1; cur_x++) {
			if (field_[cur_x][cur_y] == nullptr) {
				canvas_[cur_x][cur_y] = EMPTY;
			}
		}
	}
}

bool Field::checkCell(size_t x, size_t y)
{
	Ship* currValue = field_[x][y];
	if (currValue != nullptr) {
		canvas_[x][y] = DAMAGED_SHIP;
		currValue->damageDeck();
	}
	else {
		canvas_[x][y] = DAMAGED_SEA;
	}
	return currValue;
}


Field::~Field()
{
	field_.clear();
}
