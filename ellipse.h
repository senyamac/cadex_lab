#pragma once
#include "figure.h"

class ellipse: public figure
{
	double radx;
	int type;
public:
	ellipse();
	ellipse(int, int, int);
	~ellipse();
	double get_area();
	void accept(shared_ptr<visitor>);
};

