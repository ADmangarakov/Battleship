#include "pch.h"
#include "Game.h"
#include "Ship.h"

Game::Ship::Ship(size_t health)
	:health_(health)
	, len_(health)
{
}

bool Game::Ship::isDead()
{
	return health_;
}

void Game::Ship::damageDeck()
{
	--health_;
}


Game::Ship::~Ship()
{
}
