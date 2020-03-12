#ifndef __BANKINGCOMMONDEC1_H__
#define __BANKINGCOMMONDEC1_H__

#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;

enum
{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    PRINT,
    EXIT
};

enum CreditRank
{
    A = 1,
    B,
    C
};

#endif