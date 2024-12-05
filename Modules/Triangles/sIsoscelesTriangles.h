#pragma once
#include "sTriangles.h"

class IsoscelesTriangle : public Triangle // Равнобедренный треугольник (стороны a и c равны, углы A и C равны)
{
public:
	IsoscelesTriangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};
