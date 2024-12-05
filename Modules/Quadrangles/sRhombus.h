#pragma once
#include "sQuadrangles.h"

class Rhombus : public Quadrangle // Ромб (все стороны равны, углы A,C и B,D попарно равны)
{
public:
	Rhombus(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};
