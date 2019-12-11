#pragma once
#include <iostream>
#include "IPlayer.h"

class Painter
{
public:
	static void printMessage(std::string const& text);
	static void printMessage(std::string const& text, std::string const& name, ushort const& lenght);
	static void printErrMessage(std::string const& err);
	static void updateCanvas(IPlayer const& player);
	Painter();
	~Painter();
};

