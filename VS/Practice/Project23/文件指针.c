#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	FILE* fp;//����һ��file���͵ı���
	char name[20];
	int x;
	fp = fopen("F:\\GitHubCode\\Code\\Practice\\Projec23\\try.txt", "w");//��fopen����fp������ʵ���ļ������"ֻд"
	fprintf(fp, "%s %d", "ABC", 123);//���ļ������ABC 123
	fclose(fp);
	return 0;
}

//int main() {
//	FILE* fp;
//	char name[20];
//	int x;
//	fp = fopen("F:\\GitHubCode\\Code\\Practice\\Projec23\\try.txt", "r");//��fopen����fp������ʵ���ļ������"ֻ��"
//	if (!fp) return -1;//����Ҳ����ļ�fp�᷵��0������!fp����1��ifִ�У�"return -1"��ʾ�ļ�δ�ҵ�
//	fscanf(fp, "%s%d", name, &x);//�Ӷ�Ӧ�ļ��ж����ı�����
//	printf("%s %d\n", name, x);//�ڱ����������
//	fclose(fp);
//	return 0;
//}