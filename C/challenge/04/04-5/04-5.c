//�� ���� �ؽ�Ʈ ������ ������ �ٸ����� Ȯ���ϴ� ���α׷��� �ۼ��� ����.
//�ܼ��� ���鹮�� �ϳ��� ���̸� ������ �� �ؽ�Ʈ ������ �ٸ� ������ �Ǻ��� ���� �Ѵ�.
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp1;
    FILE *fp2;
    int D = 1;
    char c1, c2;

    fp1 = fopen(argv[1], "rt");
    fp2 = fopen(argv[2], "rt");

    while (1)
    {
        c1 = fgetc(fp1);
        c2 = fgetc(fp2);

        if (c1 != c2)
        {
            D = 0;
            break;
        }

        if (feof(fp1) != 0 && feof(fp2) != 0)
            break;
    }

    if (D)
        printf("�� ���� ������ ������ ��ġ �մϴ�.\n");
    else
        printf("�� ���� ������ ���� �ٸ��ϴ�.\n");

    fclose(fp1);
    fclose(fp2);
}