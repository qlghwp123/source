#ifndef __ACCOUNTARRAY_H__
#define __ACCOUNTARRAY_H__

#include "Account.h"
#include "BankingCommonDec1.h"

typedef Account *ACCOUNT_PTR;

class BoundCheckAccountPtrArray
{
private:
    ACCOUNT_PTR *arr;
    int arrlen;
    BoundCheckAccountPtrArray(const BoundCheckAccountPtrArray &ref)
    {
    }
    BoundCheckAccountPtrArray &operator=(const BoundCheckAccountPtrArray &ref)
    {
    }

public:
    BoundCheckAccountPtrArray(int len = MAX);
    ACCOUNT_PTR &operator[](int index);
    ACCOUNT_PTR operator[](int index) const;
    int GetArrlen();
    ~BoundCheckAccountPtrArray();
};

#endif