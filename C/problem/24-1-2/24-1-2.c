//문제 1에서 작성한 파일에 데이터를 추가하자.
//추가할 데이터는 즐겨 먹는 음식의 정보와 취미이다.
//입력의 형태는 다음과 같아야 한다.
//  #즐겨먹는 음식 : 짬뽕, 탕수육
//  #취미 : 축구
//마찬가지로 추가가 완료되면 제대로 추가되었는지 메모장으로 확인해보기 바란다.
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("mystroy.txt", "at");
    char food[30] = "#즐겨먹는 음식 : 고기\n";
    char hobby[20] = "#취미 : 게임\n";

    fputs(food, fp);
    fputs(hobby, fp);

    fclose(fp);
    return 0;
}