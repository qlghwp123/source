//FILE 구조체의 포인터가 인자로 전달되면, 파일의 크기를 바이트 단위로 계산하여 반환하는 함수를 정의하자.
//단! 바로 위에서 소개한 ftell함수를 이용해서 구현해야 하며, 함수가 호출된 이후에도 파일 위치 지시자의 정보가 변경되어서는 안된다.
//(파일의 크기를 계산하는 과정에서 변경시켰다면, 파일의 크기를 계산한 이후에는 되돌려 놓아야 한다.)
#include <stdio.h>

long CalcFileSize(FILE *fp)
{
    long size;
    long location;

    location = ftell(fp); //답지보고 추가

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    //fseek(fp, 0, SEEK_SET); //이부분이 잘못되었다. 왜냐하면 재호출 될 경우 파일 위치 지시자가 계속 처음으로 돌아가기 때문이다.
    fseek(fp, location, SEEK_SET); //답지보고 추가

    return size;
}

int main(void)
{
    FILE *fp = fopen("24-2-1.txt", "rt");
    long size;
    //파일 위치 지시자가 변경되었는지 확인이 필요하다.
    char str[100]; //답지보고 추가

    fgets(str, 100, fp); //답지보고 추가
    fputs(str, stdout);  //답지보고 추가

    size = CalcFileSize(fp);

    printf("size : %d\n", size);

    fgets(str, 100, fp); //답지보고 추가
    fputs(str, stdout);  //답지보고 추가

    size = CalcFileSize(fp);

    printf("size : %d\n", size);

    fclose(fp);

    return 0;
}
