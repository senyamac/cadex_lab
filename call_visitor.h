#pragma once
#include "visitor.h"
class call_visitor: public visitor
{
public:
	call_visitor();
	~call_visitor();

	void visit(circle*);
	void visit(ellipse*);
};

