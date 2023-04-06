#include<stdio.h>

int main(void) {
	int a, b, v1, v2, v3, v4, v5;
	a = 5;		//0101
	b = 3;		//0011

	v1 = a & b;
	v2 = a | b;
	v3 = a ^ b;
	v4 = ~v3;
	v5 = ~v4;

	printf("1. a & b :%d\n", v1);
	printf("2. a | b :%d\n", v2);
	printf("3. a ^ b :%d\n", v3);
	printf("4. (3)번 값 ~v3 :%d\n", v4);
	printf("5. (4)번 값 ~v4 :%d\n", v5);
	return 0;
}