#pragma once
#include "sTriangles.h"

class RectangularTriangle : public Triangle // Прямоугольный треугольник (угол C всегда равен 90)
{
public:
	RectangularTriangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};
