#pragma once
class circle;
class ellipse;

class visitor
{
public:
	visitor();
	~visitor();

	virtual void visit(circle*) = 0;
	virtual void visit(ellipse*) = 0;
};

