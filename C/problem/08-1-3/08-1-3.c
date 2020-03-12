//학생의 전채 평균점수에 대한 학점을 출력하는 프로그램을 작성하자. 학생의 성적이 90점이상이면 A,
//80점 이상이면 B, 70점 이상이면 C, 50점 이상이면 D, 그리고 그 미만이면 F다!
//프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력 받는다. 그리고 평균을 구한 다음 그에 적절한 학점을 출력하면 된다.

#include <stdio.h>

int main(void)
{
    int lang, eng, math;
    int i;
    double avg;

    printf("국어 영어 수학 점수를 입력하세요. : ");
    scanf("%d %d %d", &lang, &eng, &math);

    avg = (lang + eng + math) / 3.0;

      if(avg >= 90.0)
        printf("A\n");
      else if(avg >= 80.0)
        printf("B\n");
      else if(avg >= 70.0)
        printf("C");
     else if(avg >= 50.0)
        printf("D\n");
      else
        printf("F\n");
    

    return 0;
}