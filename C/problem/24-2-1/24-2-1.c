//FILE ����ü�� �����Ͱ� ���ڷ� ���޵Ǹ�, ������ ũ�⸦ ����Ʈ ������ ����Ͽ� ��ȯ�ϴ� �Լ��� ��������.
//��! �ٷ� ������ �Ұ��� ftell�Լ��� �̿��ؼ� �����ؾ� �ϸ�, �Լ��� ȣ��� ���Ŀ��� ���� ��ġ �������� ������ ����Ǿ�� �ȵȴ�.
//(������ ũ�⸦ ����ϴ� �������� ������״ٸ�, ������ ũ�⸦ ����� ���Ŀ��� �ǵ��� ���ƾ� �Ѵ�.)
#include <stdio.h>

long CalcFileSize(FILE *fp)
{
    long size;
    long location;

    location = ftell(fp); //�������� �߰�

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    //fseek(fp, 0, SEEK_SET); //�̺κ��� �߸��Ǿ���. �ֳ��ϸ� ��ȣ�� �� ��� ���� ��ġ �����ڰ� ��� ó������ ���ư��� �����̴�.
    fseek(fp, location, SEEK_SET); //�������� �߰�

    return size;
}

int main(void)
{
    FILE *fp = fopen("24-2-1.txt", "rt");
    long size;
    //���� ��ġ �����ڰ� ����Ǿ����� Ȯ���� �ʿ��ϴ�.
    char str[100]; //�������� �߰�

    fgets(str, 100, fp); //�������� �߰�
    fputs(str, stdout);  //�������� �߰�

    size = CalcFileSize(fp);

    printf("size : %d\n", size);

    fgets(str, 100, fp); //�������� �߰�
    fputs(str, stdout);  //�������� �߰�

    size = CalcFileSize(fp);

    printf("size : %d\n", size);

    fclose(fp);

    return 0;
}
