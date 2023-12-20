/*
In this code the user will enter the coefficients of the quadratic equation.
Accordingly, we will calculate the roots of this equation, if any.

Developer = Barış Somerolu 
Date = 21.12.2023 / 00.10 a.m.
*/

#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	double x1, x2, delta;

	cout << "Please Enter Coefficient of x ^ 2: ";
	cin >> a;

	cout << "\n";

	cout << "Please Enter Coefficient of x: ";
	cin >> b;

	cout << "\n";

	cout << "Please Enter Fixed Number: ";
	cin >> c;

	cout << "\n";

	delta = (b * b) - (4 * a * c);


	if (delta > 0)
	{
		cout << "There are two real roots" << endl;

		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);


		cout << "\n";

		cout << "First Root is: " << x1 << endl;
		cout << "Second Root is: " << x2 << endl;
	}

	else if (delta == 0)
	{
		cout << "There are two equals roots" << endl;

		x1 = -b / (2 * a);

		cout << "\n";

		cout << "Roots are: " << x1 << endl;
	}

	else {
		cout << "There are no real roots!";

		cout << "\n";
	}


	return 0;
}