#include "pch.h"
#include "Painter.h"


void Game::Painter::printMessage(std::string const & text)
{
}

void Game::Painter::printMessage(std::string const & text, std::string const & name, ushort const & lenght)
{
}

void Game::Painter::printErrMessage(std::string const & err)
{
}

void Game::Painter::updateCanvas(IPlayer const & player)
{
	using namespace std;
	cout << "_ _ _ _Player1_ _ _ _" << "_ _ _ _Player2_ _ _ _" << endl;
	cout << " A_B_C_D_E_F_G_H_I_J " << " A_B_C_D_E_F_G_H_I_J " << endl;
	
}

Game::Painter::Painter()
{
}


Game::Painter::~Painter()
{
}
