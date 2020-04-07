//이 문제는 언어에서 기본적으로 제공하는 라이브러리 이해도 차이인 것 같다.
//C++ 같은 경우는 찾아보니 cin 는 공백, 개행문자 등의 white space 를 입력 받지 못한다고 한다.
//출처 : https://blog.naver.com/pjh980918/221778827879
//그래서 사용한게 cin.getline(char* 저장소, 크기) 함수이다.
//저 함수를 사용하면 저장소에 크기 - 1 만큼 문자열이 기록된다.
#include <iostream>
#include <string>

#define MAX 101

using namespace std;

int main(void)
{
    char arr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        cin.getline(arr, MAX);
        cout << arr << endl;
    }

    return 0;
}