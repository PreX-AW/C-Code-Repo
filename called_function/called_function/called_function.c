#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int compare(const void*, const void*);
//int main() {
//	int arr[] = { 3,4,2,34,5,5,3,5,75,4,6,76,5,4 };
//	printf("Before:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//		if (i == sizeof(arr) / sizeof(arr[0]) - 1)printf("\n");
//	}
//	
//	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(int), compare);
//	printf("After:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//		if (i == sizeof(arr) / sizeof(arr[0]) - 1)printf("\n");
//	}
//	return 0;
//}
//int compare(const void* el1, const void* el2) {
//	return ( ( * (int*)el1) - ( * (int*)el2));
//
//}
/* qsort example */
//#include <stdio.h>      /* printf */
//#include <stdlib.h>     /* qsort */
//
//int values[] = { 40, 10, 100, 90, 20, 25 };
//
//int compare(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//    int n;
//    qsort(values, 6, sizeof(int), compare);
//    for (n = 0; n < 6; n++)
//        printf("%d ", values[n]);
//    return 0;
//}

//************************************************************qsortÊµÏÖ_bubblesort*****************************************

