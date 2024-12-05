#include "sIsoscelesTriangles.h"
#include "../sCustom_Except.h"

IsoscelesTriangle::IsoscelesTriangle(int sideA = 0, int sideB = 0, int sideC = 0, int angleA = 0, int angleB = 0, int angleC = 0) :
	Triangle(sideA, sideA, sideA, angleA, angleB, angleC) // Равнобедренный треугольник (стороны a и c равны, углы A и C равны)
{
	name = "Равнобедренный треугольник";

	if (a <= 0 || b <= 0 || c <= 0)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: длины сторон должны быть больше 0");
	else if (A + B + C != 180)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: сумма углов не равна 180");
	else if (a != c)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: стороны a и c не равны");
	else if (A != C)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: угры A и C не равны");
}
