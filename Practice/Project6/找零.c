#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("������������Ʊ�棨��һ���������");
	int bill = 0;
	int money = 0;
	scanf("%d %d", &bill, &money);
	if (bill <= money) {
		printf("����%dԪ\n", money - bill);
		printf("лл�ݹˣ���ӭ�´ι��٣�");
	}
	else {
		printf("������%dԪ", bill - money);
	}
		return 0;
}