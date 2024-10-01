#include <iostream>

class Calculator
{
public:
	Calculator()
	{
		this->num1 = 0;
		this->num2 = 0;
	}
	double num1;
	double num2;
	double add() const
	{
		return num1 + num2;
	}
	double multiply() const
	{
		return num1 * num2;
	}
	double subtract_1_2() const
	{
		return num1 - num2;
	}
	double subtract_2_1() const
	{
		return num2 - num1;
	}
	double divide_1_2() const
	{
		return num1 / num2;
	}
	double divide_2_1() const
	{
		return num2 / num1;
	}
	bool set_num1(double num1) const
	{
		num1 = this->num1;
		if (num1 != 0) { return true; }
		else { return false; }
	}
	bool set_num2(double num2) const
	{
		num2 = this->num2;
		if (num2 != 0) { return true; }
		else { return false; }
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	Calculator calc;
	double num1{}, num2{};

	while (true)
	{
		std::cout << "Введите num1: ";
		std::cin >> calc.num1;
		while (!calc.set_num1(num1))
		{
			std::cout << "Неверный ввод!\n";
			std::cout << "Введите num1: ";
			std::cin >> calc.num1;
		}

		std::cin.ignore();

		std::cout << "Введите num2: ";
		std::cin >> calc.num2;
		while (!calc.set_num2(num2))
		{
			std::cout << "Неверный ввод!\n";
			std::cout << "Введите num2: ";
			std::cin >> calc.num2;
		}

		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_2_1() << std::endl;
	}
	return 0;
}