#include <iostream>
#include <cstring>

using namespace std;

class PermanentWorker
{
private:
    char name[100];
    int salary;

public:
    PermanentWorker(char *name, int money) : salary(money)
    {
        strcpy(this->name, name);
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        cout << "name : " << name << endl;
        cout << "salary : " << GetPay() << endl
             << endl;
    }
};

class EmployeeHandler
{
private:
    PermanentWorker *empList[50];
    int empNum;

public:
    EmployeeHandler() : empNum(0)
    {
    }
    void AddEmployee(PermanentWorker *emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        for (int i = 0; i < empNum; i++)
            empList[i]->ShowSalaryInfo();
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        for (int i = 0; i < empNum; i++)
            sum += empList[i]->GetPay();
        cout << "Salary sum : " << sum << endl;
    }
    ~EmployeeHandler()
    {
        for (int i = 0; i < empNum; i++)
            delete empList[i];
    }
};

int main(void)
{
    EmployeeHandler handler;

    handler.AddEmployee(new PermanentWorker("Kim", 1000));
    handler.AddEmployee(new PermanentWorker("Lee", 2000));
    handler.AddEmployee(new PermanentWorker("Jang", 3000));

    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalary();

    return 0;
}