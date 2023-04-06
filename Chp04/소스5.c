#include<stdio.h>

int main(void) {
	int a, b;

	printf("첫번째 정수: ");
	scanf_s("%d", &a);
	printf("두번째 정수: ");
	scanf_s("%d", &b);

	printf("a == b : %d\n", a == b);
	printf("a!= b : %d\n", a!= b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a == 5 : %d\n", a == 5);
	printf("5 == a : %d\n", 5 == a);
	return 0;

}