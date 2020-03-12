#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>

using namespace std;

class Calculator
{
private:
	int add_count;
	int div_count;
	int min_count;
	int mul_count;
public:
	void Init(void);
	double Add(double n1, double n2);
	double Div(double n1, double n2);
	double Min(double n1, double n2);
	double Mul(double n1, double n2);
	void ShowOpCount(void);
	
};

void Calculator::Init(void)
{
	add_count=0;
	div_count=0;
	min_count=0;
	mul_count=0;
}

double Calculator::Add(double n1, double n2)
{
	add_count++;
	return n1 + n2;
}

double Calculator::Div(double n1, double n2)
{
	div_count++;
	return n1 / n2;
}

double Calculator::Min(double n1, double n2)
{
	min_count++;
	return n1 - n2;
}

double Calculator::Mul(double n1, double n2)
{
	mul_count++;
	return n1 * n2;
}

void Calculator::ShowOpCount(void)
{
	cout << "µ¡¼À: " << add_count;
	cout << " »¬¼À: " << min_count;
	cout << " °ö¼À: " << mul_count;
	cout << " ³ª´°¼À: " << div_count << endl;
}
#endif