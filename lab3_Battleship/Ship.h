#pragma once
#include <string>
#include <algorithm>

typedef unsigned short ushort;
class Ship
{
protected:
	virtual ushort getSize() = 0;
	ushort health_;
	ushort len_;
	Ship(size_t health);
	std::pair<size_t, size_t> uppLeftCorn_;
	std::pair<size_t, size_t> bottRightConr_;
public:
	virtual std::string getName() = 0;
	virtual ushort getLenght() { return len_; }
	virtual void setCoord(size_t X1, size_t X2, size_t Y1, size_t Y2);
	virtual bool isDead();
	virtual void damageDeck();
	virtual ~Ship();
};

