#pragma once
#include <string>

class Figure
{
	protected:
		std::string name = " ";
		unsigned int sides_count;
	public:
		virtual void print_output();

		Figure();
};
