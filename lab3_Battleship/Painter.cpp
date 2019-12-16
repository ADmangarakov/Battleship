#include "pch.h"
#include "Painter.h"
#include "IPlayer.h"


void Painter::showHeader()
{
	using namespace std;
	cout << "_ _ _ _Player1_ _ _ _" << "_ _ _ _Player2_ _ _ _" << endl;
	cout << "  A_B_C_D_E_F_G_H_I_J " << "  A_B_C_D_E_F_G_H_I_J " << endl;
	for (size_t i = 1; i < 11; i++) {
		cout << i << "                     " << i << "                     " << endl;
		cout << endl;
	}


}

void Painter::setColor(ConsoleColor text, ConsoleColor background)
{
	SetConsoleTextAttribute(stdout, (WORD)((background << 4) | text));
}

void Painter::printMessage(std::string const & text)
{
}

void Painter::printMessage(std::string const & text, std::string const & name, ushort const & lenght)
{
}

void Painter::printErrMessage(std::string const & err)
{
}

void Painter::updateCanvas(Canvas const& canvas, Canvas const& canvasMap)
{
	size_t const RADIX = 10;
	COORD position;
	char output[17];
	size_t startOutputPos = lead_;
	Canvas outputCanvas = canvas;
	for (size_t k = 0; k < 2; k++) {
		position.X = 3 + (startOutputPos%2) * 20;
		position.Y = 3;
		for (size_t i = 0; i < 11; i++) {
			for (size_t j = 0; j < 11; j++) {
				puts(itoa(outputCanvas[i][j], output, RADIX));
				position.X += 2;
			}
			position.Y += 2;
		}
		startOutputPos++;
		outputCanvas = canvasMap;
	}
}


Painter::Painter(size_t lead)
	:lead_(lead)
	, hConsole_(GetStdHandle(STD_OUTPUT_HANDLE))
{
}


Painter::~Painter()
{
}
