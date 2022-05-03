#include <iostream>
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"
using namespace std;

int main()
{
	Progression* arith = new ArithmeticProgression(0, 2.3);
	Progression* geom = new GeometricProgression(1, 3);

	for (size_t i = 0; i < 10; i++)
	{
		cout << "arith[" << i << "] = " << arith->calcElement(i) << endl
			<< "geom[" << i << "] = " << geom->calcElement(i) << endl << endl;
	}

	return 0;
}