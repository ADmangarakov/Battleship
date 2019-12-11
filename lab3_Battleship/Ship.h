#pragma once
#include <string>
typedef unsigned short ushort;
class Ship
{
protected:
	virtual ushort getSize() = 0;
	ushort health_;
	ushort len_;
	Ship(size_t health);
public:
	virtual std::string getName() = 0;
	virtual ushort getLenght() { return len_; }
	virtual bool isDead();
	virtual void damageDeck();
	virtual ~Ship();
};

