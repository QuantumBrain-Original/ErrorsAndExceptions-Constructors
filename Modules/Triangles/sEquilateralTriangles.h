#pragma once
#include "sTriangles.h"

class EquilateralTriangle : public Triangle // Равносторонний треугольник (все стороны равны, все углы равны 60)
{
public:
	EquilateralTriangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};
