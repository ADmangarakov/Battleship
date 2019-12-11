#pragma once
#include "IPlayer.h"
#include <time.h>
class RandomPlayer :
	public IPlayer
{
public:
	bool makeMove();
	void arrangeShips();
	RandomPlayer();
	~RandomPlayer();
};

