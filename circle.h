#pragma once
#include "figure.h"

class circle: public figure
{
	int type;
public:
	circle();
	circle(int, int);
	~circle();
	double get_area();
	void accept(shared_ptr<visitor>);
};

