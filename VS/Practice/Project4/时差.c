#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int hour1=0;
	int minute1=0;
	int hour2=0;
	int minute2=0;
	printf("�������һ��ʱ�䣺");
	scanf("%d %d", &hour1, &minute1);
	printf("������ڶ���ʱ�䣺");
	scanf("%d %d", &hour2, &minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t=t2-t1;
	printf("ʱ��Ϊ��%dСʱ%d����", t / 60, t % 60);
	return 0;
}