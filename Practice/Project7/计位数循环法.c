#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x = 0;
	int n = 0;
	printf("������һ����:");
	scanf("%d", &x);
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
	}
	printf("����Ϊ%dλ��",n);
	return 0;
}