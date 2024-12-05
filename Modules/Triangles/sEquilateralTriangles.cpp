#include "sEquilateralTriangles.h"
#include "../sCustom_Except.h"

EquilateralTriangle::EquilateralTriangle(int sideA = 0, int sideB = 0, int sideC = 0, int angleA = 0, int angleB = 0, int angleC = 0) :
	Triangle(sideA, sideA, sideA, angleA, angleB, angleC)
{
	name = "Равносторонний треугольник";

	if (a <= 0 || b <= 0 || c <= 0)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: длины сторон должны быть больше 0");
	else if (A + B + C != 180)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: сумма углов не равна 180");
	else if (a != b || a != c)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: стороны треугольника не равны");
	else if (A != B || A != C)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: углы треугольника не равны");
}
