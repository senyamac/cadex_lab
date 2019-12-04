#include "call_visitor.h"
#include <iostream>

#include "circle.h"
#include "ellipse.h"

using namespace std;

call_visitor::call_visitor()
{
}

call_visitor::~call_visitor()
{
}

void call_visitor::visit(circle *c)
{
	cout << "Circle. Area = " << c->get_area() << endl;
}

void call_visitor::visit(ellipse *e)
{
	cout << "Ellipse. Area = " << e->get_area() << endl;
}
