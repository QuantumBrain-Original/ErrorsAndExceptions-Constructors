#include "sRectangularTriangles.h"
#include "../sCustom_Except.h"

RectangularTriangle::RectangularTriangle(int sideA = 0, int sideB = 0, int sideC = 0, int angleA = 0, int angleB = 0, int angleC = 0) :
	Triangle(sideA, sideA, sideA, angleA, angleB, angleC)
{
	name = "Прямоугольный треугольник";

	if (a <= 0 || b <= 0 || c <= 0)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: длины сторон должны быть больше 0");
	else if (A + B + C != 180)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: сумма углов не равна 180");
	else if (A != 90 && B != 90 && C != 90)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: ни один из углов не равен 90");
}