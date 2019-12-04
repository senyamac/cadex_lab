#pragma once
#include <string>
#include "call_visitor.h"
#include <memory>
using namespace std;

#define PI 3.1415926535

class figure
{
protected:
	double rad;
public:
	figure();
	figure(int);
	~figure();
	virtual double get_area() = 0;
	virtual void accept(shared_ptr<visitor>) = 0;
};

