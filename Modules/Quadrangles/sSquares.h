#pragma once
#include "sQuadrangles.h"

class Square : public Quadrangle // Квадрат (все стороны равны, все углы равны 90)
{
public:
	Square(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};
