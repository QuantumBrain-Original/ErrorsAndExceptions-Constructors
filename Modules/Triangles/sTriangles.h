#pragma once
#include "../sFigures.h"

// фигуры с 3 углами
class Triangle : public Figure
{
protected:
	unsigned int a, b, c, A, B, C;
public:
	void print_output() override;

	Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};
