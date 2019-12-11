#pragma once

class Game
{
public:
	enum PlayerType
	{
		CONSOLE,
		RANDOM
	};
private:
	typedef unsigned short ushort;
	enum FieldState
	{
		UNKNOWN,
		DAMAGED_SHIP,
		DAMAGED_SEA,
		EMPTY
	};
	
	class IPlayer;
	class Ship;
	class IField;
	class Field;
	class Painter;

	IPlayer* Player1_;
	IPlayer* Player2_;
	PlayerType playerType1_;
	PlayerType playerType2_;
	void StartGame();
public:
	Game(PlayerType player1, PlayerType player2);
	~Game();
};

