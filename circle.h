#pragma once
#include <iostream>

class circle
{
private:
	double a, n, r;
public:
	circle() {};
	circle (double a, double n);
    void set(double, double);
    void radcircle();
    void showdata();
    friend void show(circle&);
};
