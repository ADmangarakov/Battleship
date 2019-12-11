#include "pch.h"
#include "Game.h"
#include "IPlayer.h"
#include "ConsolePlayer.h"
#include "RandomPlayer.h"
#include "Painter.h"

void Game::StartGame()
{
	player1_->setEnemField(player2_);
	player2_->setEnemField(player1_);
	Painter::updateCanvas(*player1_);
	
}

Game::Game(PlayerType player1, PlayerType player2)
	:playerType1_(player1)
	, playerType2_(player2)
{
	switch (player1) {
	case CONSOLE:
		player1_ = new ConsolePlayer();
		break;
	case RANDOM:
		player1_ = new RandomPlayer();
		break;
	}
	switch (player2) {
	case CONSOLE:
		player2_ = new ConsolePlayer();
		break;
	case RANDOM:
		player2_ = new RandomPlayer();
		break;
	default:
		break;
	}
	StartGame();
}


Game::~Game()
{
	delete player1_;
	delete player2_;
}
