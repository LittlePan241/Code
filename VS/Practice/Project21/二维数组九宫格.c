#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int board[3][3];
	int i, j;
	int numofx = 0;
	int numofo = 0;
	int result = -1;//-1û��Ӯ��1XӮ��0OӮ
	//��������
	printf("1��ʾX,0��ʾO,������9����:");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	//�����
	for (i = 0; i < 3 && result == -1; i++) {
		numofo = numofx = 0;
		for (j = 0; j < 3; j++) {
			if (board[i][j] == 1) {
				numofx++;
			}
			else {
				numofo++;
			}
		}
		if (numofo == 3) {
			result = 0;
		}
		else if (numofx == 3) {
			result = 1;
		}
	}
	//�����
	if (result == -1) {
		for (j = 0; j < 3 && result == -1; j++) {
			numofo = numofx = 0;
			for (i = 0; i < 3; i++) {
				if (board[i][j] == 1) {
					numofx++;
				}
				else {
					numofo++;
				}
			}
			if (numofo == 3) {
				result = 0;
			}
			else if (numofx == 3) {
				result = 1;
			}
		}
	}
	//���Խ���
	for (i = 0; i < 3; i++) {
		if (board[i][i] == 1) {
			numofx++;
		}
		else {
			numofo++;
		}
	}
	if (numofo == 3) {
		result = 0;
	}
	else if (numofx == 3) {
		result = 1;
	}
	numofo = numofx = 0;
	for (i = 0; i < 3; i++) {
		if (board[i][2 - i] == 1) {
			numofx++;
		}
		else {
			numofo++;
		}
	}
	if (numofo == 3) {
		result = 0;
	}
	else if (numofx == 3) {
		result = 1;
	}
	if (result == 1) {
		printf("XӮ��");
	}
	else if (result == 0) {
		printf("OӮ��");
	}
	else {
		printf("û��Ӯ");
	}
	return 0;
}