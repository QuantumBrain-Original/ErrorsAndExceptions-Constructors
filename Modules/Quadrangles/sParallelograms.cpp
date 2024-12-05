#include "sParallelograms.h"
#include "../sCustom_Except.h"

Parallelogram::Parallelogram(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) :
	Quadrangle(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD)
{
	name = "Параллелограмм"; // стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны

	if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: длины сторон должны быть больше 0");
	else if (A + B + C + D != 360)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: сумма углов не равна 360");
	else if (a != c || b != d)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: стороны a,c или b,d не равны");
	else if (A != C || B != D)
		throw Custom_Except("Ошибка создания фигуры.\nПричина: углы A,C или B,D не равны");
}
