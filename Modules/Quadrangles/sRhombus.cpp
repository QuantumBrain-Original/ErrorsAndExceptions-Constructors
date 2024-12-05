#include "sRhombus.h"
#include "../sCustom_Except.h"

Rhombus::Rhombus(int sideA = 0, int sideB = 0, int sideC = 0, int sideD = 0, int angleA = 0, int angleB = 0, int angleC = 0, int angleD = 0) :
	Quadrangle(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD)
{
	name = "Ромб"; // все стороны равны, углы A,C и B,D попарно равны

	if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: длины сторон должны быть больше 0");
	else if (A + B + C + D != 360)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: сумма углов не равна 360");
	else if (a != b || b != c || c != d)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: стороны не равны");
	else if (A != C || B != D)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: углы A,C или B,D не равны");
}
