// Lab_4.4.cpp
// < Онишківа Остапа >
// Лабораторна робота No 4.4
// Табуляція функції, заданої графіком
// Варіант 5


#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x, xp, xk, dx, R, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x <= -2)
		{
			y = x + 3;
		}
		else
			if (x > -2 && x <= 0)
			{
				y = 1 - (x + 2) / 2;
			}
			else 
				if (x>0 && x<=4)
				{
					y = 1 - ((R + 1) * (x + 2)) / 6;
				}
				else
					if (x > 4 && x <= 8 - R)
					{
						y = -R;
					}
					else
						if (x > 8 - R && x <= 8 + R)
						{
							y = -R + sqrt(R * R - (x - 8) * (x - 8));
						}
						else
						{
							y = -R;
						}

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "---------------------------" << endl;

	return 0;
}