#include <iostream>

using namespace std;

string check(double x) {
	if (x < 0)
	{
		return "негативное";
	}
	else if (x > 0)
	{
		return "позитивное";
	}
	else
	{
		return "это ноль";
	}
}

int main()
{
    setlocale(0, "rus");

	double num;

	cout << "Введите число: ";
	cin >> num;

	cout << "Ваше число " << check(num) << "\n";
}