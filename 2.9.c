#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int max = 0, min = 1000000000, maxx = -1000000000, minn = 0, num;
	for (int i = 0; i < 20; i++) {
		scanf("%d", &num);
		if (num > 0) {
			if (num > max) {
				max = num;
			}
			if (num < min) {
				min = num;
			}
		}
		if (num < 0) {
			if (num > maxx) {
				maxx = num;
			}
			if (num < minn) {
				minn = num;
			}
		}
	}
	printf("���������Ϊ:%d\n��С������Ϊ:%d\n�������Ϊ:%d\n��С������Ϊ:%d\n", max, min, maxx, minn);
	return 0;
}