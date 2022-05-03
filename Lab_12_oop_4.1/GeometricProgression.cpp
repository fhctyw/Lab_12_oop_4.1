#include "GeometricProgression.h"

double GeometricProgression::calcElement(int j)
{
    return getA() * pow(getK(), j);
}
