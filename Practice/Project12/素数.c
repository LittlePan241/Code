#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int isprime = 1;
	int x = 0;
	int i = 0;
	printf("������һ����:");
	scanf("%d", &x);
	for (i=2; i < x; i++) {
		if (x% i == 0) {
			isprime = 0;
			break;
		}
	}
	if (isprime == 0) {
		printf("������");
	}
	else {
		printf("��������");
	}
	return 0;
}