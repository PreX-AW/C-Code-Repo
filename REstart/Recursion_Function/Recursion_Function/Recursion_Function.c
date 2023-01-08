#define _CRT_SECURE_NO_WARNINGS
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
#include<stdio.h>
int main() {
	int input = 0;
	printf("please input the number you wanna figure out it's fibonacci:>\n");
	scanf("%d", &input);
	printf("%d", fib_recursion(input));
	return 0;
}