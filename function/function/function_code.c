#define _CRT_SECURE_NO_WARNINGS 1
//********************通过指针传参改变实参***************************
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
//
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
//		char y_n = judge(i);
//
//		if ('y' == y_n)
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
//		return 'n';
//
//	else
//
//		return 'y';
//
//
//
//}

//*************************自定义乘法口诀*****************************
//#include<stdio.h>
//#include<stdlib.h>
//void times(int);
//int main() {
//	int size = 0;
//	scanf("%d", &size);
//	system("cls");
//	times(size);
//	return 0;
//}
//void times(int i) {
//	for (int ii = 1; ii <= i; ii++) {
//		for (int iii = 1; iii<=ii; iii++) {
//			printf("%d*%d=%d  ", ii, iii, ii * iii);
//			
//		}
//		printf("\n");
//	}
//}

// #include<stdio.h>
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

//**************************递归实现阶乘*************************
//#include<stdio.h>
//int n_times(int);
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",n_times(n));
//	return 0;
//}
//int n_times(int n) {
//	if (n <= 1)
//		return 1;
//	else
//		return n * n_times(n - 1);
//}


//**************************非递归实现阶乘******************************
//#include<stdio.h>
//int main() {
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (int i = 1; i < n; i++) {
//		sum *= (i + 1);
//	}
//	printf("%d",sum);
//	return 0;
//
//}


//***********************递归实现打印数字每位数字****************************
//#include<stdio.h>
//
//int  print(int);
//
//int main() {
//
//	int num = 0;
//
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//
//}
//
//int print(int n) {
//
//	if (n < 10)
//
//		printf("%d\n", n);
//
//	else
//	{
//		
//		print(n/10);
//		printf("%d\n", n % 10);
//	}
//
//
//
//
//}
//****************************递归实现次方****************************
//#include<stdio.h>
//
//int mi(int, int);
//
//int main() {
//
//	int n = 0;
//
//	int k = 0;
//
//	printf("请输入需要求次方的数n，和次方数k\n");
//
//	scanf("%d%d", &n, &k);
//
//	mi(n, k);
//
//	printf("%ld\n", mi(n, k));
//
//	return 0;
//}
//
//int mi(int n, int k) {
//
//	if (k < 1)
//
//		return 1;
//
//	else
//
//	{
//
//		k--;
//		return n * mi(n,k);
//
//		
//
//	}
//
//
//
//}



////************************************递归实现数字每位求和***************************
//#include<stdio.h>
//
//int DigitSum(int);
//
//int main() {
//
//	int n = 0;
//
//	scanf("%d", &n);
//
//	printf("%d", DigitSum(n));
//
//	return 0;
//
//}
//
//int DigitSum(int n) {
//
//	if (n <= 0)
//
//		return 0;
//
//	else {
//
//		return (n % 10) + DigitSum(n / 10);
//
//	}
//
//
//
//}
//************************递归实现字符逆序*****************
//#include<stdio.h>
//void arr_transpose(int arr[], int size);
//int main() {
//	int count = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("Before\n");
//	for (count = 0; count < size; count++) {
//		printf("%d", arr[count]);
//	}
//	printf("\n");
//	printf("After\n");
//	arr_transpose(arr, size);
//	for (count = 0; count < size; count++) {
//	printf("%d", arr[count]);
//	}
//	return 0;
//}
//void arr_transpose(int arr[], int size) {
//	int i = 0;
//	if (i <= (size - 1) / 2) {
//		arr[i] = arr[size - 1];
//		i++;
//		arr_transpose(&arr[i], size);
//	}
//	
//
//}
//****************************N数之和*****************************
//#include<stdio.h>
//int main() {
//	int arr[50];
//	int N = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &N);
//	while(i<N){
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	for (int p = 0; p < i; p++) {
//		sum += arr[p];
//	}
//	printf("sun equals to %d", sum);
//	return 0;
//}
//*****************************递归实现斐波那契************************
//#include<stdio.h>
//int fib(int);
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int output =fib(n);
//	printf("%d", output);
//
//	return 0;
//}
//int fib(int n) {
//	if (n <= 2)//注意该处的截至条件为<=2
//		return 1;
//	else
//	return fib(n - 1) + fib(n - 2);
//}
 
// *******************************循环实现斐波那契*********************************
//#include<stdio.h>
//int main() {
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	printf("请输入需要求得的斐波那契项数：");
//	scanf("%d", &n);
//	if (n < 2)
//	printf("1");
//	else{
//		for (int i = 1; i <= n - 2; i++) {
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		printf("%d", c);
//	}
//	
//
//
//	return 0;
//}
//**********************************strlen递归sort*************************************8
//#include<stdio.h>
//#define Size 10
//int strlen_sort(char arr[],int );
//int main() {
//	char ch[Size] = "absfsc";
//	strlen_sort(ch, Size);
//	printf("string long equal to %d", strlen_sort(ch,Size));
//	return 0;
//}
//int strlen_sort(char arr[], int size) {
//	int i = 0;
//	if ('\0' == arr[i])
//		return 0;
//	else {
//		i++;
//		return 1 + strlen_sort(&arr[i], size);
//		//此处传参是&arr[i],是因为递归时时层层进去，再层层出来的，如果直接传参arr，会永远从首地址开始，造成死递归
//	}
//
//
//}

//*************************************递归实现求和***********************************
//#include<stdio.h>
//int sum(int);
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", sum(n));
//	return 0;
//}
//int sum(int n) {
//	if (n < 1)
//		return 0;
//	else {
//		return n + sum(n-1);
//	}
//
//
//}