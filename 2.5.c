#include <stdio.h>
int main() {
	int sum = 0;
	for (int i = 1; i < 100; i+=2) {
		sum += i;
	}
	printf("1�ӵ�99��ֵΪ%d\n", sum);
	return 0;
}