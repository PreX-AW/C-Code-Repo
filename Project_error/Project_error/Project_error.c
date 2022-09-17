#define _CRT_SECURE_NO_WARNINGS 1
//**************************************************冒泡实现**************************************
//#include<stdio.h>
//void bubble_sort(int*, int);
//int main() {
//	int arr1[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	bubble_sort(arr1, 10);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//
//
//}
//void bubble_sort(int arr1[], int size) {
//	for (int i = 0; i < size - 1; i++) {
//		for (int count = 0; count < size - i - 1; count++) {
//			int temp = 0;
//			if (arr1[count] > arr1[count + 1]) {
//				temp = arr1[count];
//				arr1[count] = arr1[count + 1];
//				arr1[count + 1] = temp;
//			}
//		}
//	}
//
//
//
// }
// ****************************************整合数组并排序**************************************
//#include<stdio.h>
//void bubble_sort(int*, int);
//int main() {
//    int arr1[5]={1,3,7,9,22};
//    int arr2[6]={2,8,10,17,33,44};
//    int arr3[11];
// 
//    for (int i = 0; i < 11; i++) {
//        if (i < 5)arr3[i] = arr1[i];
//        else arr3[i] = arr2[i-5];
//    }
//    bubble_sort(arr3, 11);
//    for (int i = 0; i <11; i++) {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}
//void bubble_sort(int arr3[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int count = 0; count < size - i - 1; count++) {
//            int temp = 0;
//            if (arr3[count] > arr3[count + 1]) {
//                temp = arr3[count];
//                arr3[count] = arr3[count + 1];
//                arr3[count + 1] = temp;
//            }
//
//
//        }
//
//
//
//    }
//
//
//}
//*************************************************Star_Shape**************************************************

#include<stdio.h>
int main() {
        int input = 0;
        scanf("%d", &input);
        for (int i = 0; i < input + 1; i++) {
            for (int count1 = input * 2 - 2*i; count1 > 0; count1--)printf(" ");
            for (int count2 = 0; count2 <= i; count2++)printf("*");
            for (int count3 = 0; count3 < i; count3++)printf(" ");
            printf("\n");
        }
        for (int i = 0; i < input; i++) {
            for (int count1 = 2 * (i + 1); count1 > 0; count1--)printf(" ");
            for (int count2 = input-i; count2 > 0; count2--)printf("*");
            for (int count3 = input - (i + 1); count3 > 0; count3--)printf(" ");
            printf("\n");

        }

        return 0;
    }
