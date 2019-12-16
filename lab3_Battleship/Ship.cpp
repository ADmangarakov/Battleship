#include "pch.h"
#include "Ship.h"

Ship::Ship(size_t health)
	:health_(health)
	, len_(health)
{
}

void Ship::setCoord(size_t X1, size_t X2, size_t Y1, size_t Y2)
{
	uppLeftCorn_ = std::make_pair(std::min(X1, X2), std::min(Y1, Y2));
	bottRightConr_ = std::make_pair(std::max(X1, X2), std::max(Y1, Y2));
}

bool Ship::isDead()
{
	return health_;
}

void Ship::damageDeck()
{
	if (health_ > 0) {
		--health_;
	}
}


Ship::~Ship()
{
}
