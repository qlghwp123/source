/*
�ֿܼ��� �Է��� �������� ����� �����̴�.
�������� EOF �� Ȱ���϶�� ��Ʈ�� ���.
�׷��� ������ �ڷ��.
https://blog.naver.com/pddhot3/220903529018
https://kin.naver.com/qna/detail.nhn?d1id=1&dirId=1040101&docId=288966649&qb=YysrIGNpbiDrsJjtmZjqsJI=&enc=utf8&section=kin&rank=3&search_sort=0&spq=0
*/
#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    while (!(cin >> a >> b).eof())
        cout << a + b << '\n';

    return 0;
}