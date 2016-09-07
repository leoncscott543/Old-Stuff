// Calculator 1.0 (2.0 is subdivided into different files)
// Leon Scott
// This Calculator does a lot of really cool things from adding/subtracting to differentiation and factorials

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include "Calculator.h"
using namespace std;

#define pi 3.1415926535897931 


int _tmain(int argc, _TCHAR* argv [])
{
	Calculation Calc;

	Beginning: // respawn point 
	int choice; 
	string fchoice; // used during end of the program- f = final
	cout << "Enter the corresponding number below to perform an operation";

		cout << endl << endl;
		cout << "\tAdd      (1)\n\tSubtract (2)\n\tDivide   (3)\n\tMultiply (4)\n\tTrig     (5)\n\tCalc     (6)\n\tExponent (7)\n\tLog      (8)\n\tInverse  (9)\n\tFactorial(10): ";
		cin >> choice;
			switch (choice)
			{
				case 1:
					cout << endl << endl;
					Calc.add();
					break;
				case 2:
					cout << endl << endl;
					Calc.sub();
					break;
				case 3:
					cout << endl << endl;
					Calc.div();
					break;
				case 4:
					cout << endl << endl;
					Calc.mul();
					break;
				case 5:
					cout << endl << endl;
					Calc.trig();
					break;
				case 6:
					cout << endl << endl;
					Calc.calc();
					break;
				case 7:
					cout << endl << endl;
					Calc.pow();
					break;
				case 8:
					cout << endl << endl;
					Calc.ln();
					break;
				case 9:
					cout << endl << endl;
					Calc.inv();
					break;
				case 10:
					cout << endl << endl;
					Calc.fact();
					break;
			
			}

	cout << endl << endl << endl;

	cout << "Would you like to do another calculation (type 'yes' or 'no')? ";

	cin >> fchoice;
	
	cout << endl << endl << endl << endl;
	
	if (fchoice == "yes")
	{
		goto Beginning; 
	}

	cout << "\n\nThanks for using Calculator 1.0!!";

	char f;
	cin >> f;

	return 0;
}

void Calculation::add()
{
	double elements[50];
	double sum = 0;
	int a;
		cout << "How many values are you adding? max. 50: ";
		cin >> a;
		for (int i = 0; i < a; i++)
		{
			cout << "Number " << i + 1 << ": ";
			cin >> elements[i];
		}
		for (int i = 0; i < a; i++)
		{
			sum += elements[i];
		}
		for (int i = 0; i < a; i++)
		{
			cout << elements[i] << " + ";
		}
		cout << "0 = " << sum;
}

void Calculation::sub()
{
	signed elements[50];
	signed dif; 
	signed a;
	cout << "How many values are you subtracting? max. 50: ";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cout << "Number " << i + 1 << ": ";
		cin >> elements[i];
	}

	dif = elements[0];
	for (int i = 1; i < a; i++)
	{
		dif -= elements[i];
	}
	for (int i = 0; i < a; i++)
	{
		cout << elements[i] << " - ";
	}
	cout << "0 = " << dif;
} 

void Calculation::div()
{
double elements[50];
double prod;
double a;
	cout << "How many values are you dividing? max. 50: ";
	cin >> a;

	

		for (int i = 0; i < a; i++)
		{
			cout << "Number " << i + 1 << ": ";
			cin >> elements[i];
		}
		
		prod = elements[0];

		for (int i = 1; i < a; i++)
		{
			prod = (prod / elements[i]);
		}
		for (int i = 0; i < a; i++)
		{
			cout << elements[i] << " / ";
		}
	cout << "1 = " << prod;
}

void  Calculation::mul()
{
double elements[50];
double sum = 1;
int a;
	cout << "How many values are you multiplying? max. 50: ";
	cin >> a;

		for (int i = 0; i < a; i++)
		{
			cout << "Number " << i + 1 << ": ";
			cin >> elements[i];
		}
		for (int i = 0; i < a; i++)
		{
			sum *= elements[i];
		}
		for (int i = 0; i < a; i++)
		{
			cout << elements[i] << " * ";
		}

	cout << "1 = " << sum;

}

void Calculation::trig()
{
		int h;
		float c;

		cout << "Enter the corresponding number below to perform the trig. operation (in degrees)...\n\n";

		cout << "\t(1)sin \n\t(2)cos \n\t(3)tan \n\t(4)arcsin \n\t(5)arccos \n\t(6)arctan : ";

		cin >> h;

		cout << "\n\n\t\tTheta: "; 

		cin >> c;

		c *= pi / 180;

		switch (h)
		{

			case 1:
				cout << "sin(" << c << ")" << " = " << sin(c);
				break;
			case 2:
				cout << "cos(" << floor(c) << ")" << " = " << cos(c);
				break;
			case 3:
				cout << "tan(" << c << ")" << " = " << tan(c);
				break;
			case 4:
				cout << "arcsin(" << c << ")" << " = " << asin(c);
				break;
			case 5:
				cout << "arccos(" << c << ")" << " = " << acos(c);
				break;
			case 6:
				cout << "arctan(" << c << ")" << " = " << atan(c);
				break;

	}
}

void Calculation::calc()
{
	signed deg, deg2;
	signed i = 0;
	signed a = 0;
	signed coe[26];

	string pol = "abcdefghijklmnopqrstuvwsyz";

	cout << "This function differenciates polynomial functions. \n\nWhat is your highest degree of the polynomial you are deriving (cannot exceed 26)? ";
	cin >> deg;


	cout << endl << endl;

	cout << "f(x) = ";

	while (a < deg)
	{
		cout << pol[a] << "x^" << a + 1 << " + ";
		a++;
	}

	cout << "0";

	cout << endl << endl << "Type in your coeffiecents below\n\n";

	for (int k = 0; k < 5; k++)
	{
			cout << "\t  ||||\n";
	}

	
	cout << "\t||||||||\n\t  ||||\n\t   ||\n\n";

	cout << endl;
	for (i; i < deg; i++)
	{
		cout << "\t   " << pol[i] << "x^" << i + 1 << ": ";
		cin >> coe[i];
		cout << endl;
	}

	cout << endl << endl;

	cout << "f(x) = ";

	i = 0;

	deg2 = deg;

	while (i < deg2)
	{

		cout << coe[i] << "x^" << i + 1 << " + ";

		i++;
	}

	cout << "0";

	cout << endl << endl;

	i = 0;

	cout << "f'(x) = ";


	while (i < (deg2))
	{

		cout << (i + 1) * coe[i] << "x^" << i << " + ";

		i++;
	}

	cout << "0";
	
	return;
	
}

void Calculation::pow()
{
	double n, x;

	cout << "\tIn the form of x^n";

	cout << "\n\n\t\tx = ";

	cin >> x;

	cout << "\n\t\tn = "; 

	cin >> n;


	cout << "\n\n\t\t" << x << "^" << n << " = " << pow(x, n);

	return;

}

void Calculation::ln()
{
	double a;

	cout << "\tln of: ";

	cin >> a;

	cout << "\n\n\tln(" << a << ")" << " = " << log(a);

	return;
}

void Calculation::inv()
{
	double a;

	cout << "\tInverse of: ";

	cin >> a;

	cout << "\n\n\tInverse(" << a << ")" << " = " << 1/a;

	return;
}

void Calculation::fact()
{
	double f, f2, f3;
	signed array[100000];
	double i = 1;

	cout << "Factorial of: ";

	cin >> f;

	cout << endl << endl;

	f2 = f;
	f3 = f2;
	for (i = 1; i < f; i++)
	{
		f2 = (f2*(f - i));
		cout << (f3) << " * ";

		f3 -= 1;
	}

	cout << " 1 = " << f2;

	cout << endl << endl << f << "! = " << f2;

	return;
} 
