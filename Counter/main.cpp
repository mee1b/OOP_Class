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
		std::cout << "�������� �������� �����: ";
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
		"+ : ��������� ������� �� 1\n"
		"- : ��������� ������� �� 1\n"
		"= : �������� ������� �������� ��������\n"
		"x : ��������� ������ ���������\n\n"
	};
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� yes ��� no: ";
	std::string answer;
	std::cin >> answer;
	for (unsigned int i = 0; i < answer.length(); ++i)
	{
		answer[i] = tolower(answer[i]);
	}
	while (answer != "yes" && answer != "no")
	{
		std::cout << "�� �������! yes ��� no: ";
		std::cin >> answer;
		for (unsigned int i = 0; i < answer.length(); ++i)
		{
			answer[i] = tolower(answer[i]);
		}
	}

	if (answer == "yes")
	{ 
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> count;
		one.newCount(count); 
	}

	char choice{};
	std::cout << hints;
	
	while (true)
	{
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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