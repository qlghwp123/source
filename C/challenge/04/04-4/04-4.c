//���ڿ��� �����ϰ� �ִ� ������ ��� A�� P�� �����ϴ� �ܾ��� ���� ��� ����ϴ� ���α׷��� �ۼ��� ����.
//�� ��� �ܾ�� ���鹮��(�����̽���, \t, \n)�� ���ؼ� ���еȴٰ� �����Ѵ�.
//������ ����
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char temp[100];
    int ret;
    int a_count = 0;
    int p_count = 0;

    fp = fopen(argv[1], "rt");

    while (1)
    {
        /* �������� A, P�� ������ �߸� �ν�. ������� �ϴ°� ����.
        temp = fgetc(fp);
        if (temp == '\n' || temp == '\t' || temp == ' ')
            continue;
        else if (temp == 'A')
            a_count++;
        else if (temp == 'P')
            p_count++;
        */
        //����
        fscanf(fp, "%s", temp);

        if (temp[0] == 'A' || temp[0] == 'a')
            a_count++;
        else if (temp[0] == 'P' || temp[0] == 'p')
            p_count++;

        if (feof(fp) != 0)
            break;
    }
    printf("A�� �����ϴ� �ܾ��� �� : %d\n", a_count);
    printf("P�� �����ϴ� �ܾ��� �� : %d\n", p_count);

    fclose(fp);

    return 0;
}