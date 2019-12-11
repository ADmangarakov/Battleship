#pragma once
#include "IPlayer.h"

class ConsolePlayer :
	public IPlayer
{
public:
	void arrangeShips();
	bool makeMove();
	ConsolePlayer();
	~ConsolePlayer();
};

