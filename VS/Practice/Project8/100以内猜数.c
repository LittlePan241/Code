#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int count = 0;
	int mynumber = 0;
	printf("��ӭ���������Ϸ!\n");
	srand(time(0));
	int number = rand() % 100 + 1;
	printf("���Ѿ�Ϊ��׼������һ����");
	do {
		printf("��������Ĳ���:");
		scanf("%d", &mynumber);
		count++;
		if (mynumber > number) {
			printf("��´���");
		}
		else if (mynumber < number) {
			printf("���С��");
		}
	} while (mynumber != number);
	if (count <= 7) {
		printf("��ϲ����%d�ξͲ¶��ˣ�\n", count);
	}
	else {
		printf("������%d�βŲ¶ԡ�", count);
	}
	return 0;
}