#include<stdio.h>

int main(void) {
	int num, v1, v2, v3, v4;
	num = 5;		//5�� 2������ 0000 0101

	v1 = num << 1;
	v2 = num << 2;
	v3 = num >> 1;
	v4 = num >> 2;

	printf("num=5�� ��\n");
	printf("1.���� ����Ʈ ����\n");
	printf("num<<1:%d\n", v1);
	printf("num<<2:%d\n", v2);
	printf("2.������ ����Ʈ ����\n");
	printf("num>>1:%d\n", v3);
	printf("num>>2:%d\n", v4);
	return 0;
}