#include "circle.h"
#include <iostream>
#include <cmath>

using namespace std;


circle::circle(double a, double n)
{
    this->a = a;
    this->n = n;
}

void circle::set(double a, double n)
{
	this->a = a;
	this->n = n;
}



void circle::radcircle()
{
	double p = 3.14;
	r = a / (2 * sin(p / n));
}

void circle::showdata()
{
	cout << "radius circle---> " << r << endl;
}


void show(circle & object)
{
	cout << object.a << "\t" << object.n << endl;
}

