#include <iostream>
#include <math.h>

using namespace std;

double calculate(double x, char operation, double y) {
	if (y != 0)
	{
		switch (operation)
		{
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		case '%':
			return fmod(x, y);
		}
	}
	else {
		return 0.0;
	}
	
}

int main()
{
	setlocale(0, "rus");

	double x;
	double y;
	char operation;

	cout << "Добро пожаловать в калькулятор.\n";

	while (true)
	{
		cout << "Возможности калькулятора: +, -, *, /, %.\n";
		cout << "Пример: 10.3 + 20, результат: 30.3\n";

		cin >> x >> operation >> y;

		cout << "Результат: " << calculate(x, operation, y) << "\n";
		system("pause");
		system("cls");
	}
}
