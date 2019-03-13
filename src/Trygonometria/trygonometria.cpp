#include "trygonometria.h"
#include <cmath>

double degreemath::sin(double degree) {
float radian = degree*(3.14/180);
return std::sin(radian);
}