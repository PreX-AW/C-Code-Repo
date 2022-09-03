#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int, int);
int main() {
	int a = 10;
	int b = 29;
	int c = add(a, b);
	printf("%d", c);
	return 0;
}
int add(int x, int y) {

	return x + y;
}