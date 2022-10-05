#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//void left_Rotate(char arr[], int val);
//int main() {
//	char arr[] = "ABCD";
//	printf("Before:%s\n", arr);
//	int val = 0;
//	scanf("%d", &val);
//	left_Rotate(arr, val);
//	printf("After:%s", arr);
//	return 0;
//}
//void left_Rotate(char arr[], int val) {
//	int i = 0;
//	for (i=1;; i++) {
//		if ('\0' == arr[i - 1])break;
//	}
//	i = i - 1;
//	char temp;
//	for (int count = 0; count < val; count++) {
//		temp = arr[0];
//		for (int counter = 0; counter < i; counter++) {
//
//			arr[counter] = arr[counter + 1];
//
//
//		}
//		arr[i - 1] = temp;
//	}
//
//	
//
//}
//***********************************************************判断两字符串是否有旋转关系**************************************

//
//#include<stdio.h>
//#define size 10
//int judege(char* arr1, char* arr2);
//int left_Rotate(char* arr1);
//int right_Rotate(char* arr1);
//char arr1[size];
//char arr2[size];
//int main() {
//
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//	int left=	left_Rotate(arr1);
//	if (1 == left) {
//		printf("1");
//		return 0;
//	}
//	int right=  right_Rotate(arr1);
//	if (1 == right) {
//		printf("1");
//		return 0;
//	}
//	return 0;
//}
//int left_Rotate(char* arr1) {
//	int i = 0;
//	for ( i = 0; ; i++) {
//		if ('\0' == arr1[i])break;
//	}
//	int sz = i - 1;
//	for (int count = 0; count < sz; count++) {
//		char temp = arr1[0];
//		for (int counter = 0; counter < sz; counter++) {
//			arr1[counter] = arr1[counter + 1];
//
//
//		}
//		arr1[i - 1] = temp;
//		if (1 == judege(arr1, arr2, sz))return 1;
//
//	}
//	return 0;
//
//
//
//
//}
//int right_Rotate(char* arr1) {
//
//	int i = 0;
//	for (i = 0; ; i++) {
//		if ('\0' == arr1[i])break;
//	}
//	int sz = i - 1;
//	for (int count = 0; count < sz; count++) {
//		char temp = arr1[i-1];
//		for (int counter = sz-1; counter >0; counter--) {
//			arr1[counter] = arr1[counter -1];
//
//
//		}
//		arr1[0] = temp;
//		if (1 == judege(arr1, arr2, sz))return 1;
//
//	}
//	return 0;
//
//
//
//
//
//
//}
//
//int judege(char* arr1, char* arr2,int sz) {
//	for (int i = 0; i < sz; i++) {
//		if (arr1[i] != arr2[i])return 0;
//
//	}
//	return 1;
//
//
//
//}
//**************************************************时间复杂度小于O(n)的杨氏矩阵查找****************************
//#include<stdio.h>
//#define Row 5
//#define Clu 6
//int Row_Judge(int target, int*, int row, int clu);
//int Clu_Judge(int target, char*, int row, int clu);
//int main() {
//	int arr[Row][Clu] = { {1,2,3,4,5,6},{2,3,4,5,6,7},{3,4,5,6,7,8},{4,5,6,7,8,9},{5,6,7,8,9,10}};
//	int target;
//	scanf("%d", &target);
//	if (1 == Row_Judge(target,arr,Row,Clu)) {
//		printf("YES");
//		return 0;
//	}
//	if(1==Clu_Judge(target, arr, Row, Clu)){
//			printf("YES");
//			return 0;
//		}
//	return 0;
//}
//int Row_Judge(int target, int*arr[Row][Clu], int row, int clu) {
//
//
//
//}
//int Clu_Judge(int target, int* arr[Row][Clu], int row, int clu) {
//	for(int i<)
//
//
//}
//
//



//********************************string_left_cricle**************************************

//#include<stdio.h>
//#include<string.h>
//void L_circle(char arr[5], int time,int len);
//int main() {
//	char arr[] = "ABCD";
//	int input = 0;
//	printf("How many chars you wanna circle?\n");
//	scanf("%d", &input);
//	printf("Before:%s\n", arr);
//	L_circle(arr,input,  strlen(arr));
//	printf("After:%s\n", arr);
//	return 0;
//}
//void L_circle(char *ptr, int time,int len) {
//	for (int i = 0; i < time; i++) {
//		char temp = *(ptr);
//		for (int count = 0; count<len; count++) {
//			*(ptr + count) = *(ptr + count + 1);
//			if (count ==len - 1)*(ptr + count) = temp;
//
//		}
//	}
//
//}









