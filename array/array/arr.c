#define _CRT_SECURE_NO_WARNINGS 1

//*************************
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//**********************************��������������*******************************8
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















//*************************************����һ���������飬��ɶ�����Ĳ���************************************
//*************************************ʵ�ֺ���init() ��ʼ������Ϊȫ0***************************************
//*************************************ʵ��print()  ��ӡ�����ÿ��Ԫ��**************************************
//************************************ʵ��reverse()  �����������Ԫ�ص����á�**********************************
#include<stdio.h>
#define Size 10
void init(int arr[], int size);
void print(int arr[], int size);
void reverse(int arr[], int size);
int main() {
	int arr[Size];
	init(arr,Size);
	for (int i = 0; i < Size; i++) {
		scanf("%d", &arr[i]);
	
	}
	printf("Before:\n");
	print(arr, Size);
	reverse(arr, Size);
	printf("After:\n");
	print(arr, Size);

	return 0;
}
void init(int arr[], int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		arr[i] = 0;
	}
}
void print(int arr[], int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	
	}
	printf("\n");
}
void reverse(int arr[], int size) {
	int i = 0;
	for (i = 0; i < (size - 1) / 2; i++) {
		int temp = 0;
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}


}

//******************************ð������(increase/up)*****************************8
//#include<stdio.h>
//void bubble_Up_sort(int arr[], int size);
//int main() {
//	int arr[10] = { 12,124,12,3,1,41,233,14,1,23 };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("Before\n");
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	bubble_Up_sort(arr, size);
//	printf("After\n");
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void bubble_Up_sort(int arr[], int size) {
//	int count = 0;
//	int i = 0;
//	for (count=0; count < size - 1; count++) {
//		for (i=0; i < size - 1 - count; i++) {
//			int temp = 0;
//			if (arr[i] > arr[i + 1]) {
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//
//	}
//}