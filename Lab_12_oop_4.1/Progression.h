#pragma once
#include <iostream>
using namespace std;

class Progression abstract
{
	double a = 0;
	double k = 1;
public:
	Progression(double first_elem = 0, double k = 0) : a(first_elem), k(k) {};
	double getA() const { return a; };
	void setA(double a) { this->a = a; }
	double getK() const { return k; }
	void setK(double k) { this->k = k; }

	virtual double calcElement(int j) = 0;
};

