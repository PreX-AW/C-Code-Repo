#define _CRT_SECURE_NO_WARNINGS 1
//#include<math.h>
//int main() {
//	int N;
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N; i++) {
//		int judge = 0;
//		for (int temp = 1; temp <=sqrt(i); temp++) {
//			if (0 == i % temp)judge++;
//
//	}
//		if (1 == judge)printf("%d\n", i);
//	}
//
//	return 0;
//}
//	int num = 0;
//scanf("%d", &num);
//int size
#include<stdio.h>
//void fun(int);
//int main() {
//	int val = 0;
//	scanf("%d", &val);
//	fun(val);
//	return 0;
//}
//void fun(int val) {	if (val < 10) {
//		printf("%d", val);
//		return val;
//	}
//printf("%d", val % 10);
//	return fun(val/10);
//}
int fib(int);
long pow(int);
int main() {
	int p = 0;
	int k = 0;
	scanf("%d%d", &p, &k);
	printf("%ld", fib(p) % pow(k));
	return 0;
}
int fib(int p) {
	if (p < 2)return 1;
	return fib(p - 1) + fib(p - 2);
}
long pow(int k) {
	int i = 0;
	long time = 1;
	for (i = 0; i < k; i++) {
		time *= 2;

	}
	return time;
}