#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double foot;
	double inch;
	printf("������Ӣ�ߺ�Ӣ��");
	scanf("%lf %lf", &foot, &inch);
	printf("�������Ϊ%f��\n", (foot + inch / 12) * 0.3048);
	return 0;
}