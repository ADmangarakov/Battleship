#include "pch.h"
#include "Game.h"
#include "Ship.h"

Ship::Ship(size_t health)
	:health_(health)
	, len_(health)
{
}

bool Ship::isDead()
{
	return health_;
}

void Ship::damageDeck()
{
	--health_;
}


Ship::~Ship()
{
}
