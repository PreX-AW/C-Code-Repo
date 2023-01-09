#define _CRT_SECURE_NO_WARNINGS
//*********************************times_form************************************
//#include<stdio.h>
//void times_form(int);
//int main() {
//	int input = 0;
//	printf("please input the number you wanna print times_form:>\n");
//	scanf("%d", &input);
//	times_form(input);
//	return 0;
//}
//void times_form(int input) {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < input + 1; i++) {
//		for (j = 1; j < i + 1; j++) {
//			printf("%10d x %d =%d    ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	
//}

//******************************swap******************************
//#include<stdio.h>
//void swap(int*, int*);
//int main() {
//	int a = 0;
//	int b = 0;
//	printf("please input two numbers:>\n");
//	scanf("%d%d", &a, &b);
//	printf("Before swap:a=%d,b=%d\n", a, b);
//	swap(&a,&b);
//	printf("After swap:a=%d,b=%d\n", a, b);
//	return 0;
//}
//void swap(int* a, int* b) {
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//*******************************************judge_leap_year********************************
//#include<stdio.h>
//void judge_leap(int);
//int main() {
//	int year = 0;
//	printf("please input years number:>\n");
//	scanf("%d", &year);
//	judge_leap(year);
//	return 0;
//}
//void judge_leap(int year) {
//	if ((0 == year % 4) && (0 != year % 100) || (0 == year % 400))printf("%d is leap year.\n", year);
//	else printf("%d is common year.\n", year);
//}

//****************************************judge_primer************************************
//#include<stdio.h>
//#include<math.h>
//void judge_primer(int,int);
//int main() {
//	int begin = 0;
//	int end = 0;
//	printf("please input the begin and end you wanna judge:>\n");
//	scanf("%d%d", &begin,&end);
//	judge_primer(begin,end);
//	return 0;
//}
//void judge_primer(int begin, int end) {
//	int counter = 0;
//	for (begin; begin <= end ; begin++) {
//		for (int i = 2; i <=sqrt(begin); i++) {
//			if (0 == begin % i)counter++; break;
//		}
//		if(0==counter)printf("%d is primer\n", begin);
//		counter = 0;
//	}
//}

////************************************binary_search**************************************
//#include<stdio.h>
//int binary_search(int*£¬int, int);
//int main() {
//	int arr[10] = { 1,2,4,6,23,435,644,892,902,1000 };
//	int target = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int* arrsize = &arr;
//
//	printf("please input target:>\n");
//	//scanf("%d", &target);
//	if (-1 == (binary_search(arr, target, size)))printf("Can not find target\n");
//	else printf("Find it! The target is arr[%d]:%d", (binary_search(arr, target, size)), target);
//	
//	return 0;
//}
//int binary_search(int*arr, int target, int size) {
//	int left = 0;
//	int right = size-1;
//	int mid = 0;
//	while (left <= right) {
//		mid = left + (right - left) / 2;
//		if (arr[mid] > target) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < target) {
//			left = mid + 1;
//		}
//		else return mid;
//	}
//	return -1;
//}

//************************************************factorial_common_sort********************************
//#include<stdio.h>
//int main() {
//	int n = 0;
//	int sum = 1;
//printf("please input the number you wanna factorial:>\n");
// 
//	scanf("%d", &n);
//	for (int i=1;i <= n; i++) {
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}
//**************************************************factorial_recursion_sort******************************
//#include<stdio.h>
//int fac_recursion_sort(int);
//int main() {
//	int n = 0;
//	printf("please input the number you wanna factorial:>\n");
//	scanf("%d", &n);
//	printf("%d", fac_recursion_sort(n));
//	return 0;
//
//}
//int fac_recursion_sort(int n) {
//
//	if (n > 1) {
//		return fac_recursion_sort(n - 1) * n;//find the common format ,such as n!=n*(n-1)!,(n-1)!=(n-1)*(n-2)!,
//											//the factor which can continue decompose is recursion variable
//			
//	}
//	if (1 == n)return 1;
//}

//************************************print_each_number_recursion_sort_1****************************
//#include<stdio.h>
//void print_each(int);
//int main() {
//	int input = 0;
//	printf("please input the number :>\n");
//	scanf("%d", &input);
//	print_each(input);
//	
//	return 0;
//}
//void print_each(int input) {
//	if (input > 9) {
//		print_each(input / 10);
//	}
//	printf("%d ", input%10);
//}
//************************************print_each_number_recursion_sort_2****************************
//#include<stdio.h>
//void print_each(int);
//int main() {
//	int input = 0;
//	printf("please input the number :>\n");
//	scanf("%d", &input);
//	print_each(input);
//	
//	return 0;
//}
//void print_each(int input) {
//	if (input < 10)printf("%d ", input);
//	else {
//		print_each(input / 10);
//		printf("%d ", input % 10);
//	}
//}
// 
//**********************************************************************************
//**********************************************************************************
//**********************************************************************************
//**********************************************************************************
//**********************************************************************************
//**********************************************************************************
//*******************************Recursion_sort_string_lengthen*********************
//#include<stdio.h>
//int my_strlen(char*);
//int main() {
//	char arr[] = "abc";
//	printf("arr lengthen is %d.\n", my_strlen(arr));
//	return 0;
//}
//int my_strlen(char* arr) {
//	if ('\0' == *arr)return 0;
//	else return my_strlen(arr++) + 1;//can not use arr++,because when arr++ as the paramemter,
//									//it alway transfer arr as the parameter value,not arr+1; 
//									//the better way is to use arr+1 instead of ++arr,it will not change value of arr;
//}


//**************************fibonacci_recursion_sort************************
//#include<stdio.h>
//int fib_recursion(int);
//int main() {
//	int input = 0;
//	printf("please input the number you wanna figure out it's fibonacci:>\n");
//	scanf("%d", &input);
//	printf("%d", fib_recursion(input));
//	return 0;
//}
//int fib_recursion(int input) {
//	if (input < 3)return 1;
//	else return fib_recursion(input - 1) + fib_recursion(input - 2);
//}

//***********************************fibnocci_alternate**********************************
//#include<stdio.h>
//int fib_alternate(int);
//int main() {
//	int input = 0;
//	printf("please input the number you wanna figure out it's fibonacci:>\n");
//	scanf("%d", &input);
//	printf("%d", fib_alternate(input));
//	return 0;
//}
//int fib_alternate(int input) {
//	static  int a = 1;
//	static  int b = 1;
//	static int c = 1;
//	while (input > 2) {
//		c = a + b;
//		a = c;
//		b = a;
//		input--;
//	}
//	return c;
//}

//*************************************************n to power of k**********************************
//#include<stdio.h>
//int power(int,int);
//int main() {
//	int n = 0;
//	int k = 0;
//	printf("please input the number and k index you wanna figure out it's power:>\n");
//	scanf("%d%d", &n,&k);
//	printf("%d", power(n,k));
//	return 0;
//}
//int power(int n,int k) {
//	if (k > 0)return power(n,k-1) * n;
//	else return 1;
//
//}

//*************************each_number_sum******************************
//#include<stdio.h>
//int each_sum(int);
//int main() {
//	int input = 0;
//	printf("please input the number you wanna figure each number sum:>\n");
//	scanf("%d", &input);
//	printf("%d", each_sum(input));
//	return 0;
//
//}
//int each_sum(int input) {
//	if (input > 9)return each_sum(input / 10) + input % 10;
//	else return input;
//	
//}

//*************************************string_reverse**************************
//#include<stdio.h>
//char* reverse_string(char*);
//int main() {
//	char arr[20] = "";
//	int size = 0;
//	printf("please intput arr you wanna reverse print:>\n");
//	scanf("%s", arr);
//	printf("%s",reverse_string(arr));
//	return 0;
//}
//char* reverse_string(char* arr) {
//	int length = my_strlen(arr);
//	char temp = '0';
//	if(length>1)
//
//	
//}
//int my_strlen(char* arr) {
//	if ('\0' == *arr)return 0;
//	else return my_strlen(arr + 1) + 1;
//	
//}

//************************************sum_N_number*******************
//#include <stdio.h>
//
//int main() {
//	int N = 0;
//	scanf("%d", &N);
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	for (i = 0; i < N; i++) {
//		scanf("%d", &count);
//		sum += count;
//	}
//	printf("%d", sum);
//	return 0;
//}

//**************************************sum 1 to n**************************
//#include <stdio.h>
//
//int main() {
//	long sum = 0;
//	long n = 0;
//	scanf("%ld", &n);
//	long count = 0;
//	for (count = 0; count < n; count++) {
//		sum += count + 1;
//	}
//	printf("%ld", sum);
//	return 0;
//}
//****************************my_strlen***************************
//#include<stdio.h>
//int my_strlen(char*);
//int main() { 
//	char arr[20] = "";
//	printf("Please input the arr you wanna figure out it lengthen:>\n");
//	scanf("%s", arr);
//	printf("arr lengthen is %d.\n", my_strlen(arr));
//	
//	
//	return 0; }
//int my_strlen(char* arr) {
//	if ('\0' == *arr)return 0;
//	else return my_strlen(arr + 1) + 1;
//	
//}