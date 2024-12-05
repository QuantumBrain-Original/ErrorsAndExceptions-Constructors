#pragma once
#include "sQuadrangles.h"

class Rectangles : public Quadrangle // Прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
{
public:
	Rectangles(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};
