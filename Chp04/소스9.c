#include<stdio.h>

int main(void) {
	int num, v1, v2, v3, v4;
	num = 5;		//5를 2진수로 0000 0101

	v1 = num << 1;
	v2 = num << 2;
	v3 = num >> 1;
	v4 = num >> 2;

	printf("num=5일 때\n");
	printf("1.왼쪽 시프트 연산\n");
	printf("num<<1:%d\n", v1);
	printf("num<<2:%d\n", v2);
	printf("2.오른쪽 시프트 연산\n");
	printf("num>>1:%d\n", v3);
	printf("num>>2:%d\n", v4);
	return 0;
}