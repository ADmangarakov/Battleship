#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
class Painter
{
	typedef std::vector<std::vector<ushort>> Canvas;
	enum ConsoleColor
	{
		Black,
		Blue,
		Green,
		Cyan,
		Red,
		Yellow = 14
	};
	size_t const lead_;
	void showHeader();
	void setColor(ConsoleColor text, ConsoleColor background);
	void chooseColor(FieldState currValue);
	HANDLE const hConsole_;
public:
	static void printMessage(std::string const& text);
	static void printMessage(std::string const& text, std::string const& name, ushort const& lenght);
	static void printErrMessage(std::string const& err);
	void updateCanvas(Canvas const& canvas, Canvas const& canvasMap);
	Painter(size_t lead);
	~Painter();
};

