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
//int main() {
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	int arr3[10] = { 0 };
//	int i = 0;
//	for (; i < 10; i++) {
//		arr3[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr3[i];
//
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d", arr1[i]);
//		if (9 == i)printf("\n");
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d", arr2[i]);
//		if (9 == i)printf("\n");
//	}
//
//	
//	return 0;
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

//******************************冒泡排序*****************************8
#include<stdio.h>
#define Size 10
void bobbule_sort(int arr[], int size);
int main() {
	int arr[Size];
	int count = 0;
	while(0!=scanf("%d",&arr[count])){
		count++;
		if (count >= Size)
			break;
}
	for (int i = 0; i < Size; i++) {
		printf("%d", arr[i]);
		if (Size - 1 == i)printf("\n");
	}
	bobbule_sort(arr, Size);
	for (int i = 0; i < Size; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}
void bobbule_sort(int arr[], int size) {
	int temp = 0;
	for (int count = size-1; count <0; count--) {
		for (int k = 0; k < count; k++) {
			if (arr[k] > arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	
	}

}