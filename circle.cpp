#include "circle.h"

circle::circle():figure()
{
	type = 1;
}

circle::circle(int rad, int type) : figure(rad)
{
	this->type = type;
}

circle::~circle()
{
}

double circle::get_area()
{
	if (type == 1)
		return PI * rad * rad;
}

void circle::accept(shared_ptr<visitor> v)
{
	v->visit(this);
}
