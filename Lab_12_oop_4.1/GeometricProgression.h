#pragma once
#include "Progression.h"

class GeometricProgression : public Progression
{
public:
	GeometricProgression(double a = 0, double r = 0) : Progression(a, r) {};
	virtual double calcElement(int j) override;
};

