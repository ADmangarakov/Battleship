#include "pch.h"
#include "Game.h"
#include "IPlayer.h"

void Game::StartGame()
{
	Player1_->setEnemField(Player2_);
	Player2_->setEnemField(Player1_);
}

Game::Game(PlayerType player1, PlayerType player2)
	:playerType1_(player1)
	, playerType2_(player2)
{
	switch (player1) {
	case Game::CONSOLE:
		Player1_ = new Game::IPlayer::ConsolePlayer();
		break;
	case Game::RANDOM:
		Player1_ = new Game::IPlayer::RandomPlayer();
		break;
	}
	switch (player2) {
	case Game::CONSOLE:
		Player2_ = new Game::IPlayer::ConsolePlayer();
		break;
	case Game::RANDOM:
		Player2_ = new Game::IPlayer::RandomPlayer();
		break;
	default:
		break;
	}
	StartGame();
}


Game::~Game()
{
	delete Player1_;
	delete Player2_;
}
