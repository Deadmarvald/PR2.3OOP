#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	Money a, b, c, d;

	double x;

	cout << "Enter a value of \"a\":"; cin >> a;
	cout << "Enter a value of \"b\":"; cin >> b;

	cout << "Вiднiмання суми: " << a - b;
	cout << endl;

	cout << "Дрiб = "; cin >> x;
	cout << endl;

	cout << "Результата множення: " << a * x;
	cout << endl;

	if (a == b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " == "
			 << b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a != b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " != "
			 << b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a > b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " > "
			 << b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a < b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " < "
			 << b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a >= b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " >= "
			 << b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a <= b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " <= "
			 << b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	cout << "a++: " << a++;
	cout << "res: " << a;
	cout << "++a: " << ++a;

	cout << "a--: " << a--;
	cout << "res: " << a;
	cout << "--a: " << --a;

	system("pause");
	return 0;
}