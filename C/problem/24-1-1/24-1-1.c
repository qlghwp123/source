//프로그램 상에서 mystory.txt라는 이름의 파일을 생성해서 본인의 이름, 주민번호, 전화번호를 저장하는 프로그램을 작성하자.
//단 저장의 형태는 다음과 같아야한다.(# 문자도 함께 저장되어야 한다.)
//  #이름 : 윤성우
//  #주민번호 : 900208-1012589
//  #전화번호 : 010-1111-2222
//그리고 저장이 완료되면 메모장으로 확인이 가능해야 한다.
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("mystroy.txt", "wt");
    char name[30] = "#이름 : 이동근\n";
    char perID[30] = "#주민번호 : 960314-1111111\n";
    char phone[30] = "#전화번호 : 010-3045-6088\n";

    fputs(name, fp);
    fputs(perID, fp);
    fputs(phone, fp);

    fclose(fp);
    return 0;
}