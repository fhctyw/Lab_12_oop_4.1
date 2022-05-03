#pragma once
#include "Progression.h"

class ArithmeticProgression : public Progression
{
public:
	ArithmeticProgression(double a = 0, double d = 0) : Progression(a, d) {};
	virtual double calcElement(int j) override;
};

