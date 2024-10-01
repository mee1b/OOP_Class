#include <iostream>

class Counter
{
private:
	int count;
public:
	Counter()
	{
		this->count = 1;
	}
	void plusOne()
	{
		count++;
	}
	void minusOne()
	{
		count--;
	}
	void showCount() const
	{
		std::cout << "Значение счетчика равно: ";
		std::cout << count << std::endl;
	}
	void newCount(int count)
	{
		this->count = count;
	}

};

int main()
{
	setlocale(LC_ALL, "rus");

	Counter one;
	int count;
	std::string hints
	{
		"+ : увеличьте счётчик на 1\n"
		"- : уменьшите счётчик на 1\n"
		"= : выведите текущее значение счётчика\n"
		"x : завершите работу программы\n\n"
	};
	std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	std::string answer;
	std::cin >> answer;
	for (unsigned int i = 0; i < answer.length(); ++i)
	{
		answer[i] = tolower(answer[i]);
	}
	while (answer != "yes" && answer != "no")
	{
		std::cout << "Не понимаю! yes или no: ";
		std::cin >> answer;
		for (unsigned int i = 0; i < answer.length(); ++i)
		{
			answer[i] = tolower(answer[i]);
		}
	}

	if (answer == "yes")
	{ 
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> count;
		one.newCount(count); 
	}

	char choice{};
	std::cout << hints;
	
	while (true)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> choice;
		switch (choice)
		{
		case '+':
			one.plusOne();
			break;
		case '-':
			one.minusOne();
			break;
		case'=':
			one.showCount();
			break;
		case 'x':
			return 0;
		}
	}
}