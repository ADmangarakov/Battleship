#pragma once
#include "IPlayer.h"
class Game::IPlayer::ConsolePlayer :
	public IPlayer
{
public:
	void arrangeShips();
	bool makeMove();
	ConsolePlayer();
	~ConsolePlayer();
};

