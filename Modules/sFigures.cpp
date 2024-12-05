#include <iostream>
#include "sFigures.h"
#include "sCustom_Except.h"

void Figure::print_output()
{
	std::cout << name << std::endl;
	std::cout << "Стороны: Нет\n" << "Углы: Нет" << std::endl;
}

Figure::Figure() : sides_count(0), name("Фигура")
{
	if (sides_count != 0)
		throw Custom_Except("Ошибка создания фигуры. Причина: неверное количество сторон");
}
