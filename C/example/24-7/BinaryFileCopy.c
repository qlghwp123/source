#include <stdio.h>

int main(void)
{
    FILE *src = fopen("src.bin", "rb");
    FILE *des = fopen("dst.bin", "wb");
    char buf[20];
    int readCnt;

    if (src == NULL || des == NULL)
    {
        puts("���� ���� ����!");
        return -1;
    }

    while (1)
    {
        readCnt = fread((void *)buf, sizeof(char), sizeof(buf), src);

        if (readCnt < sizeof(buf))
        {
            if (feof(src) != 0)
            {
                fwrite((void *)buf, sizeof(char), sizeof(buf), des);
                puts("���� ���� �Ϸ�!");
                break;
            }
            else
                puts("���� ���� ����!");

            break;
        }
        fwrite((void *)buf, sizeof(char), sizeof(buf), des);
    }

    fclose(src);
    fclose(des);

    return 0;
}