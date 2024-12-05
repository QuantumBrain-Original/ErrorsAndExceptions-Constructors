#include <iostream>
#include "sQuadrangles.h"
#include "../sCustom_Except.h"

void Quadrangle::print_output()
{
	std::cout << name << std::endl;
	std::cout << "(Стороны: " << a << ", " << b << ", " << c << ", " << d;
	std::cout << "; Углы: " << A << ", " << B << ", " << C << ", " << D;
	std::cout << ") создан" << std::endl;
}

Quadrangle::Quadrangle(int sideA = 0, int sideB = 0, int sideC = 0, int sideD = 0, int angleA = 0, int angleB = 0, int angleC = 0, int angleD = 0) :
	a(sideA), b(sideB), c(sideC), d(sideD), A(angleA), B(angleB), C(angleC), D(angleD)
{
	name = "Четырехугольник";

	if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: длины сторон должны быть больше 0");
	else if (A + B + C + D != 360)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: сумма углов не равна 360");
}