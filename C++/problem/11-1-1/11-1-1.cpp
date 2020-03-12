#include <iostream>

using namespace std;

class Gun
{
private:
    int bullet;
public:
    Gun(int bnum) : bullet(bnum)
    {
    }
    void Shot()
    {
        if(bullet > 0)
        {        
            cout << "BBang!" << endl;
            bullet--;
        }
        else
        {
            cout << "Hut BBang!" << endl;
        }
        
    }
};

class Police
{
private:
    int handcuffs;
    Gun* pistol;
public:
    Police(int bnum, int bcuff) : handcuffs(bcuff)
    {
        if(bnum > 0)
            pistol = new Gun(bnum);
        else
            pistol = NULL;
    }

    Police(const Police &ref) : handcuffs(ref.handcuffs)
    {
        if(pistol != NULL)
            delete pistol;
        
        pistol = new Gun(*(ref.pistol));
    }

    void PutHandcuff()
    {
        if(handcuffs > 0)
        {
            cout << "SNAP!" << endl;
            handcuffs--;
        }
        else
            cout << "Nope!" << endl;
    }

    void Shot()
    {
        if(pistol == NULL)
            cout << "Hut BBang!" << endl;
        else
            pistol->Shot();
    }

    ~Police()
    {
        if(pistol != NULL)
            delete pistol;
    }

    Police& operator=(const Police& ref)
    {
        if(pistol != NULL)
            delete pistol;
        
        pistol = new Gun(*(ref.pistol));
        handcuffs = ref.handcuffs;

        return *this;
    }

};

int main(void)
{
    Police pman1(2, 5);
    Police pman2(3, 1);
    Police pman3=pman1;

    pman1.Shot();
    pman1.Shot();
    pman1.PutHandcuff();
    pman1.PutHandcuff();
    pman1.PutHandcuff();
    pman1.PutHandcuff();
    pman1.PutHandcuff();

    pman1.Shot();
    pman1.PutHandcuff();

    pman1 = pman2;

    pman1.Shot();
    pman1.PutHandcuff();
    cout << "pman1에 깊은 복사가 진행되었다." << endl;

    pman3.Shot();
    pman3.Shot();
    pman3.Shot();
    pman3.PutHandcuff();
    pman3.PutHandcuff();
    pman3.PutHandcuff();
    pman3.PutHandcuff();
    pman3.PutHandcuff();
    pman3.PutHandcuff();
    cout << "복사 생성자로 pman3가 pman1의 멤버로 초기화 되었다." << endl;

    return 0;
}