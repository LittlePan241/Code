#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("������0-9����:");
	int x=0;
	int i=0;
	int count[10];
	//��������
	for (i = 0; i < 10; i++) {
		count[i] = 0;
	}
	//������ʼ������
	scanf("%d", &x);
	while (x != -1) {
		if (x >= 0 && x <= 9) {
			count[x]++;
		}
		scanf("%d", &x);
	}
	for (i = 0; i < 10; i++) {
		printf("%d:%d\n", i, count[i]);
	}
	//�������
	return 0;
}