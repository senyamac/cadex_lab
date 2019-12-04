#include "ellipse.h"

ellipse::ellipse() :figure()
{
	radx = 0;
	type = 2;
}

ellipse::ellipse(int radx, int rady, int type) : figure(rady)
{
	this->radx = radx;
	this->type = type;
}

ellipse::~ellipse()
{
}

double ellipse::get_area()
{
	if (type == 2)
		return PI * radx * rad;
}

void ellipse::accept(shared_ptr<visitor> v)
{
	v->visit(this);
}
