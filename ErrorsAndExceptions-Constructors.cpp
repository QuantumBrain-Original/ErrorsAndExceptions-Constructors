#include <iostream>
#include <exception>
#include <Windows.h>

#include "Modules/sCustom_Except.h"
#include "Modules/sFigures.h"

#include "Modules/Triangles/sTriangles.h"
#include "Modules/Triangles/sRectangularTriangles.h"
#include "Modules/Triangles/sIsoscelesTriangles.h"
#include "Modules/Triangles/sEquilateralTriangles.h"

#include "Modules/Quadrangles/sQuadrangles.h"
#include "Modules/Quadrangles/sParallelograms.h"
#include "Modules/Quadrangles/sRhombus.h"
#include "Modules/Quadrangles/sRectangles.h"
#include "Modules/Quadrangles/sSquares.h"

#define cEMPTY_STR std::cout << std::endl;

void print_info(Figure* objFigure)
{
	if (objFigure != nullptr)
		objFigure->print_output();
	else
		std::cout << "Ошибка чтения указателя!\n";
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	Figure* unkFigure = new Figure{}; // "Фигура:"
	print_info(unkFigure);
	cEMPTY_STR

	Triangle* triangle = nullptr; // Треугольник
	try
	{
		triangle = new Triangle{ 10, 20, 30, 50, 60, 70 };
		print_info(triangle);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete triangle;
	cEMPTY_STR

	RectangularTriangle* rectangularTriangle = nullptr; // Прямоугольный треугольник
	try
	{
		rectangularTriangle = new RectangularTriangle{ 10, 20, 30, 50, 40, 90 };
		print_info(rectangularTriangle);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
//	cEMPTY_STR
	try
	{
		rectangularTriangle = new RectangularTriangle{ 10, 20, 30, 50, 60, 70 };
		print_info(rectangularTriangle);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete rectangularTriangle;
	cEMPTY_STR

	IsoscelesTriangle* isoscelesTriangle = nullptr; // Равнобедренный треугольник
	try
	{
		isoscelesTriangle = new IsoscelesTriangle{ 30, 20, 30, 50, 80, 50 };
		print_info(isoscelesTriangle);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
//	cEMPTY_STR
	try
	{
		isoscelesTriangle = new IsoscelesTriangle{ 10, 20, 30, 50, 60, 70 };
		print_info(isoscelesTriangle);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete isoscelesTriangle;
	cEMPTY_STR

	EquilateralTriangle* equilateralTriangle = nullptr; // Равносторонний треугольник
	try
	{
		equilateralTriangle = new EquilateralTriangle{ 20, 20, 20, 60, 60, 60 };
		print_info(equilateralTriangle);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	try
	{
		equilateralTriangle = new EquilateralTriangle{ 10, 20, 30, 50, 60, 70 };
		print_info(equilateralTriangle);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete equilateralTriangle;
	cEMPTY_STR


	Quadrangle* quadrangle = nullptr; // Четырехугольник
	try
	{
		quadrangle = new Quadrangle{ 10, 20, 30, 40, 90, 110, 40, 120 };
		print_info(quadrangle);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete quadrangle;
	cEMPTY_STR

	Parallelogram* parallelogram = nullptr; // Параллелограмм
	try
	{
		parallelogram = new Parallelogram{ 30, 40, 30, 40, 60, 120, 60, 120 };
		print_info(parallelogram);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	try
	{
		parallelogram = new Parallelogram{ 10, 20, 30, 40, 60, 120, 60, 120 };
		print_info(parallelogram);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete parallelogram;
	cEMPTY_STR

	Rhombus* rhombus = nullptr; // Ромб
	try
	{
		rhombus = new Rhombus{ 10, 10, 10, 10, 80, 100, 80, 100 };
		print_info(rhombus);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	try
	{
		rhombus = new Rhombus{ 10, 10, 10, 10, 50, 60, 70, 80 };
		print_info(rhombus);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete rhombus;
	cEMPTY_STR

	Rectangles* rectangles = nullptr; // Прямоугольник
	try
	{
		rectangles = new Rectangles{ 40, 15, 40, 15, 90, 90, 90, 90 };
		print_info(rectangles);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	try
	{
		rectangles = new Rectangles{ 10, 20, 30, 40, 50, 60, 70, 80 };
		print_info(rectangles);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete rectangles;
	cEMPTY_STR

	Square* square = nullptr; // Квадрат
	try
	{
		square = new Square{ 35, 35, 35, 35, 90, 90, 90, 90 };
		print_info(square);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	try
	{
		square = new Square{ 20, 20, 20, 20, 50, 60, 70, 80 };
		print_info(square);
	}
	catch (const Custom_Except& except_msg)
	{
		std::cout << except_msg.what() << std::endl;
	}
	delete square;

	delete unkFigure;
}
