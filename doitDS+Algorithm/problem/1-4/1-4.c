#include <stdio.h>
/*
//���� § �ڵ�
int middle(int a, int b, int c)
{
    if(a >= b)
        if(a > b)
            if(b >= c)
                if( b > c)
                    return b;   //a > b > c
                else
                    return b;   //a > b = c
            else
                if(a >= c)
                    if(a>c)
                        return c; // a > c > b
                    else
                        return c; // a = c > b
                else
                    return a;     // c > a > b
        else
            if( b >= c)
                if( b > c)
                    return b;     // a = b > c
                else
                    return b;     // a = b = c
            else
                return a;         // c > a = b
    else
        if(b <= c)
            if( b < c)
                return b;         // c > b > a
            else
                return b;         // b = c > a
        else
            if( a >= c)
                if( a>c)
                    return a;     // b > a > c
                else
                    return a;     // b > a = c
            else
                return c;         // b > c > a
    
}

int main(void)
{
    printf("middle(%d, %d, %d) = %d\n", 3, 2, 9, middle(3, 2, 9));

    return 0;
}
*/
//����. 1C-1 �� ����.
int med3(int a, int b, int c)
{
	if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

int main(void)
{
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 1, med3(3, 2, 1));  /* [A] a > b > c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 2, med3(3, 2, 2));  /* [B] a > b = c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 1, 2, med3(3, 1, 2));  /* [C] a > c > b */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 3, med3(3, 2, 3));  /* [D] a = c > b */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 1, 3, med3(2, 1, 3));  /* [E] c > a > b */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 3, 2, med3(3, 3, 2));  /* [F] a = b > c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 3, 3, med3(3, 3, 3));  /* [G] a = b = c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 2, 3, med3(2, 2, 3));  /* [H] c > a = b */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 1, med3(2, 3, 1));  /* [I] b > a > c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 2, med3(2, 3, 2));  /* [J] b > a = c */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 1, 3, 2, med3(1, 3, 2));  /* [K] b > c > a */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 3, med3(2, 3, 3));  /* [L] b = c > a */
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 1, 2, 3, med3(1, 2, 3));  /* [M] c > b > a */

	return 0;
}