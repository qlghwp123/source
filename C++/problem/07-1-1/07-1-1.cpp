#include <iostream>

using namespace std;

class Car
{
private:
    int gasolineGauge;

public:
    Car(int n) : gasolineGauge(n)
    {
    }
    int GetGasGauge()
    {
        return gasolineGauge;
    }
};

class HybridCar : public Car
{
private:
    int eletricGauge;

public:
    HybridCar(int mygasoline, int myelectric) : Car(mygasoline), eletricGauge(myelectric)
    {
    }
    int GetEleGauge()
    {
        return eletricGauge;
    }
};

class HybridWaterCar : public HybridCar
{
private:
    int waterGaugel;

public:
    HybridWaterCar(int mygasoline, int myelectric, int mywater) : HybridCar(mygasoline, myelectric), waterGaugel(mywater)
    {
    }
    void ShowCurrentGauge()
    {
        cout << "ÀÜ¿© °¡¼Ö¸° : " << GetGasGauge() << endl;
        cout << "ÀÜ¿© Àü±â·® : " << GetEleGauge() << endl;
        cout << "ÀÜ¿© ¿öÅÍ·® : " << waterGaugel << endl;
    }
};

int main(void)
{
    HybridWaterCar car1(1000, 2000, 3000);
    car1.ShowCurrentGauge();

    return 0;
}