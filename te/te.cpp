#include "iostream"

using namespace std;

void func(float a, float b, float c)
{
	float x1, x2, dx, F;
	int k = 0;
	cout << "Введите начало отрезка: ";
	cin >> x1;
	cout << "Введите конец отрезка: ";
	cin >> x2;
	cout << "Введите шаг: ";
	cin >> dx;

	for (double x = x1; x <= x2; x += dx)
	{
		if (b != 0 && x < 0)
		{
			F = -((2 * x - c) / (c * x - a));
		}
		else
		{
			if (b == 0 && x > 0)
			{
				F = (x - a) / (x - c);
			}
			else
				if (b != 0)
				{
					F = -(x / c) + (-c / 2 * x);
				}
				else
					k++;
		}
		if (k == 1)
		{
			cout << "Функция не может быть выполнена" << endl;
			k = 0;
		}
		else
		{
			if ((((int)a | (int)b) && !((int)a | (int)c)) != 0)
				cout << "При значении [" << x << "] функция F = " << F << endl << endl;
			else
				cout << "При значении [" << x << "] функция F = " << (int)F << endl << endl;
		}
	}
}
int main()
{
	setlocale(0, "");
	float a, b, c;
	cout << "Введите a : ";
	cin >> a;
	cout << "Введите b : ";
	cin >> b;
	cout << "Введите c : ";
	cin >> c;
	func(a, b, c);

	system("pause");
	return 0;
}

