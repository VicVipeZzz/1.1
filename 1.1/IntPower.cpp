#include "IntPower.h"
#include <cmath>
#include <iostream>
using namespace std;

void IntPower::SetFirst(double value)
{
	if (value > 0)
		first = value;
	else
		first = 0;
}

void IntPower::SetSecond(int value)
{
	if (value > 0)
		second = value;
	else
		second = 0;
}

bool IntPower::Init(double k, int m)
{
	if (k > 0 && m > 0)
	{
		SetFirst(k);
		SetSecond(m);
		return true;
	}
	else
		return false;
}

void IntPower::Read()
{
	double k;
	int m;
	do
	{
		cout << "first  =  "; cin >> k;
		cout << "second =  "; cin >> m;
	} while (!Init(k, m));
}

void IntPower::Display()
{
	cout << "first  = " << first << endl;
	cout << "second = " << second << endl;
}

double IntPower::Power()
{
	return pow(first, second);
}
