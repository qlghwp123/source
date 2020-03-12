#ifndef __PRINTER_H__
#define __PRINTER_H__

#define MAX 100

#include <cstring>
#include <iostream>

using namespace std;

class Printer
{
private:
	char str[100];
public:
	void SetString(char *input);
	void ShowString(void);
};

void Printer::SetString(char *input)
{
	strcpy(str, input);
}

void Printer::ShowString(void)
{
	cout << str << endl;
}

#endif