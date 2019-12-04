#include "circle.h"
#include "ellipse.h"
#include <iostream>
#include <vector>
#include <random>
#include <typeinfo> 
#include "call_visitor.h"

using namespace std;

struct compare
{
	bool operator() (figure* first, figure* second)
	{
		return (first->get_area() < second->get_area());
	}
};

int main() {

	int size = 0;
	double area_sum = 0;
	double area_sum2 = 0;

	default_random_engine generator;
	uniform_int_distribution<int> distribution(1, 100);

	cout << "Input size: ";
	cin >> size;
	cout << endl;

	vector<figure*> vec(size);

	shared_ptr<call_visitor> cv = make_shared<call_visitor>();

	for (int i = 0; i < size; i++) {
		if (distribution(generator) % 2 == 0) {
			vec[i] = new circle(distribution(generator), 1);
		}
		else {
			vec[i] = new ellipse(distribution(generator), distribution(generator), 2);
		}
	}

	sort(vec.begin(), vec.end(), compare());

	for (int i = 0; i < vec.size(); i++) {
		//cout << vec[i]->get_area() << " ";
		vec[i]->accept(cv);
		if (dynamic_cast<circle*>(vec[i]))
			area_sum += vec[i]->get_area(); 
	}
	cout << endl;
	cout << endl;

	cout << "Area sum = " << area_sum << endl;

	for (int i = 0; i < vec.size(); i++)
	{
		delete vec[i];
	}
	vec.clear();

	return 0;
}

