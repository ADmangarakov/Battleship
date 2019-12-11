#include "pch.h"
#include "Painter.h"
#include "IPlayer.h"


void Painter::printMessage(std::string const & text)
{
}

void Painter::printMessage(std::string const & text, std::string const & name, ushort const & lenght)
{
}

void Painter::printErrMessage(std::string const & err)
{
}

void Painter::updateCanvas(IPlayer const & player)
{
	using namespace std;
	cout << "_ _ _ _Player1_ _ _ _" << "_ _ _ _Player2_ _ _ _" << endl;
	cout << "  A_B_C_D_E_F_G_H_I_J " << "  A_B_C_D_E_F_G_H_I_J " << endl;
	cout << "1 ";
	IField* curr_field = player.getField();
	
}

Painter::Painter()
{
}


Painter::~Painter()
{
}
