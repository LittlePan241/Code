#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	int t = 0;
	printf("������������:");
	scanf("%d %d", &a, &b);
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("���Լ��Ϊ%d",a);
	return 0;
}