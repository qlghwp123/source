/*
string 클래스를 사용해 구현한다.
아주 단순한 원리를 이용했다.
과연 한 단어를 판단하는 기준이 무엇인가를 고민했다.
문제에서도 단어는 띄어쓰기 한 개로 구분된다고 하였다.
추가적인 요소가 문자열 앞, 뒤에 공백이 있을 수 있다고 판단하면
앞 또는 뒤에 공백이 있을 때, 둘 다 있을 때, 둘 다 없을 때를 고려했다.
단어의 개수는
앞 또는 뒤에 있을 때 : 띄어쓰기 개수와 동일
둘 다 있을 때 : 띄어쓰기 개수 - 1
둘 다 없을 때 : 띄어쓰기 개수 + 1
이게 끝이다. 이것을 코드로 옮긴 것이 답이다.
----------------------------------------------------------------------
알아보니 더 좋은 방법이 있는 것같아 출처를 남긴다.
https://kjwan4435.tistory.com/49
내가 문제를 잘못 이해한 것일지도 모르겠다.
*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string in;
    int token = 0;

    getline(cin, in);
    int len = in.size();

    if (in[0] == ' ' && in[len - 1] == ' ')
        token--;
    else if (in[0] != ' ' && in[len - 1] != ' ')
        token++;

    for (int i = 0; i < len; i++)
        if (in[i] == ' ')
            token++;

    cout << token << endl;

    return 0;
}