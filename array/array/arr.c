#define _CRT_SECURE_NO_WARNINGS 1

//*************************
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//**********************************交换两数组内容*******************************8
//#include<stdio.h>
//
//#define Size 10
//
//void arr_transpose(int arr1[], int arr2[], int arr3[], int size);
//
//int main() {
//
//	int arr1[Size] = { 1,2,3,4,5,6,7,8,9,0, };
//
//	int temp[Size] = { 0 };
//
//	int arr2[Size] = { 1,1,1,1,1,1,1,1,1,1, };
//	int i = 0;
//	printf("Before:\n");
//	for (i = 0; i < Size; i++) {
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < Size; i++) {
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	arr_transpose(arr1, temp,arr2 , Size);
//	printf("After:\n");
//	for (i = 0; i < Size; i++) {
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < Size; i++) {
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}
//void arr_transpose(int arr1[], int temp[], int arr2[], int size) {
//	int i = 0;
//	for (i = 0; i < size; i++) {
//		temp[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp[i];
//		
//	}
//
//
//
//
//
//}















//*************************************创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//#include<stdio.h>
//#define Size 10
//void init(int arr[], int size);
//void print(int arr[], int size);
//void resverse(int arr[], int size);
//int main() {
//	int arr[Size];
//	init(arr, Size);
//	int i = 0;
//	while (0 != scanf("%d", arr[i])) {
//		i++;
//		if (i >Size-1)
//			break;
//	}
//
//		
//
//	return 0;
//}
//void init(int *arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = 0;
//	
//	}
//
//}
//void print(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d", arr[i]);
//	
//	}
//
//}
//void resverse(int arr[], int size) {
//	int temp = 0;
//	for (int count = 0; count < size/2; count++) {
//		temp = arr[count];
//		arr[count] = arr[size - count];
//		arr[size - count] = temp;
//	}
//
//
//
//}

//******************************冒泡排序(increase/up)*****************************8
#include<stdio.h>
void bubble_Up_sort(int arr[], int size);
int main() {
	int arr[10] = { 12,124,12,3,1,41,233,14,1,23 };
	int i = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Before\n");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_Up_sort(arr, size);
	printf("After\n");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
void bubble_Up_sort(int arr[], int size) {
	int count = 0;
	int i = 0;
	for (count=0; count < size - 1; count++) {
		for (i=0; i < size - 1 - count; i++) {
			int temp = 0;
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}

	}
}