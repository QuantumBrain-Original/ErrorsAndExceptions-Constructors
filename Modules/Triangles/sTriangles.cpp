#include <iostream>
#include "sTriangles.h"
#include "../sCustom_Except.h"

void Triangle::print_output() //override
{
	std::cout << name << std::endl;
	std::cout << "(Стороны: " << a << ", " << b << ", " << c;
	std::cout << "; Углы: " << A << ", " << B << ", " << C;
	std::cout << ") создан" << std::endl;
}

Triangle::Triangle(int sideA = 0, int sideB = 0, int sideC = 0, int angleA = 0, int angleB = 0, int angleC = 0) :
	a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC)
{
	name = "Треугольник";

	if (a <= 0 || b <= 0 || c <= 0)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: длины сторон должны быть больше 0");
	else if(A + B + C != 180)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: сумма углов не равна 180");
}