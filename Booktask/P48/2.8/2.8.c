#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[20];
	int j = 0, k = 0, l = 0;//jΪ0��kΪ����lΪ��(�Ƹ�����
	int kk = 0, ll = 0;//��ͱ���
	double kkk = 0, lll = 0;//ƽ����
	printf("������20����:");
	for (int i = 0; i < 20; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			j++;
		}
		else if (a[i] > 0) {
			k++;
			kk += a[i];
		}
		else if (a[i] < 0) {
			l++;
			ll += a[i];
		}
	}
	kkk = kk * 1.0 / k;
	lll = ll * 1.0 / l;
	printf("%d��������,%d����������%d��0\n", k, l, j);
	printf("������֮��Ϊ%d,������֮��Ϊ%d\n", kk, ll);
	if (k == 0) {
		printf("����������ƽ����\n");
	}
	else {
		printf("��������ƽ����Ϊ%.2f\n", kkk);
	}
	if (l == 0) {
		printf("�޸�������ƽ����\n");
	}
	else {
		printf("��������ƽ����Ϊ%.2f\n", lll);
	}
	return 0;
}