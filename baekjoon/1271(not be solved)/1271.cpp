#include <iostream>
#include <string>

using namespace std;

void operating(string &temp, string &species)
{
    char val;

    for(int i = 1;i<=species.size();i++)
    {
        val = temp[temp.size()-i] - species[species.size()-i];
        cout << temp[temp.size()-i] << ", " << species[species.size()-i] << '\n';
        
        if(val < 0)
        {
            val = 48 + (10 + val);
            temp[temp.size()-i] = val;
            for(int j=i+1;j<=temp.size();j++)
                if(temp[temp.size() - j] > 48)
                {
                    temp[temp.size() - j]--;
                    break;
                }
                else if(temp[temp.size() - j] == 48)
                    temp[temp.size() - j] = 48 + 9;
        }
        else
            temp[temp.size()-i] = val + 48;

        if(temp[0] <= 48)
            temp.erase(0, 1);
            
    }   
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string money;
    string species;
    string temp;
    int quote = 0;

    cin >> money >> species;

    temp = money;

    while(1)
    {
        operating(temp, species);
        quote++;
        if(temp.size() == species.size() && temp[0] < species[0])
            break;
    }

    cout << quote << '\n' << temp << '\n';

    return 0;
}