#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f(int* p);
int main() {
	int i = 6;
	printf("i�ĵ�ַΪ%p\n", &i);
	printf("i��ֵΪ%d\n", i);
	f(&i);
	printf("����f������i��ֵΪ%d\n", i);
	return 0;
}
void f(int* p) {
	printf("������ʾi�ĵ�ַΪ%p\n", p);
	printf("������ʾi��ֵΪ%d\n", *p);
	*p = 24;
}