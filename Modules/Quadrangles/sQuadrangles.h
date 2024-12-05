#pragma once
#include "../sFigures.h"

// фигуры с 4 углами
class Quadrangle : public Figure // Четырехугольник
{
protected:
	unsigned int a, b, c, d, A, B, C, D;
public:
	void print_output() override;

	Quadrangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};
