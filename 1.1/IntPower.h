#pragma once
class IntPower
{
private:
	double first;
	int second;

public:
	double GetFirst() const { return first; }
	int GetSecond() const { return second; }

	void SetFirst(double value);
	void SetSecond(int value);

	bool Init(double k, int m);
	void Display();
	void Read();

	double Power();
};
