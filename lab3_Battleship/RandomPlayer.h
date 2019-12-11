#pragma once
#include "IPlayer.h"
#include <time.h>
class Game::IPlayer::RandomPlayer :
	public IPlayer
{
public:
	bool makeMove();
	void arrangeShips();
	RandomPlayer();
	~RandomPlayer();
};

