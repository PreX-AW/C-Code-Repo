#define _CRT_SECURE_NO_WARNINGS 1
//********************通过指针传参改变实参
//#include<stdio.h>
//#include<stdio.h>
//
//void change(int* x, int* y);
//
//int main() {
//
//	int a = 0;
//
//	int b = 0;
//
//	scanf("%d%d", &a, &b);
//
//	printf("before change:a=%d,b=%d\n", a, b);
//
//	change(&a, &b);
//
//	printf("after change :a=%d,b=%d", a, b);
//
//	return 0;
//
//}
//
//void change(int* x, int* y) {
//
//	int z = 0;
//
//	z = *x;
//
//	*x = *y;
//
//	*y = z;
//
//}

//#include<stdio.h>
//
//char judge(int );
//int main() {
//
//	
//
//		int years = 0;
//
//	scanf("%d", &years);
//
//	char Y_N  = '0';
//    Y_N=judge(years);
//
//	if (Y_N == 'Y')
//
//		printf("yes");
//
//	else
//
//		printf("no");
//
//	return 0;
//
//}
//
//char judge(int years) {
//
//	if (0 != years % 100 && 0 == years % 4)
//
//		return 'Y';
//
//	else if (0 == years % 400)
//
//		return 'Y';
//
//	else
//
//		return 'N';
//
//}


//******************调用函数测试是否是素数************************

//#include<stdio.h>
//
//#include<math.h>
//
//char judge(int);
//
//int main() {
//
//	for (int i = 100; i < 201; i++) {
//
//		char Y_N = judge(i);
//
//		if ('Y' == Y_N)
//
//			printf("%d是素数\n", i);
//
//		
//		else
//
//			printf("%d不是素数\n", i);
//
//
//	}
//
//	return 0;
//
//}
//
//char judge(int num) {
//
//	int plus = 1;
//
//	int count = 0;
//
//	for (; plus <= sqrt(num); plus++) {
//
//		if (0 == num % plus)
//
//			count++;
//
//	}
//
//	if (2 <= count)
//
//		return 'N';
//
//	else
//
//		return 'Y';
//
//
//
//}
