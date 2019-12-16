#pragma once
#include "IPlayer.h"
#include "ConsolePlayer.h"
#include "RandomPlayer.h"
typedef unsigned short ushort;

enum PlayerType
{
	CONSOLE,
	RANDOM
};

class Game
{
	PlayerType playerType1_;
	PlayerType playerType2_;
	IPlayer* player1_;
	IPlayer* player2_;

public:
	Game(PlayerType player1, PlayerType player2);
	void StartGame();
	~Game();
};

