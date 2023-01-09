#define _CRT_SECURE_NO_WARNINGS
//************************Swap_Arr********************************
//#include<stdio.h>
//void Swap(char*, char*,int);
//int main() {
//	char arr1[10] = "123456789";
//	char arr2[10] = "987654321";
//	printf("Before swap:\n%s\n%s\n", arr1, arr2);
//	Swap(arr1, arr2,sizeof(arr1)/sizeof(arr1[0]));
//	printf("After swap:\n%s\n%s\n", arr1, arr2);
//	return 0;
//}
//void Swap(char* arr1, char* arr2,int size) {
//	int i = 0;
//	char temp = 0;
//	for (i = 0; i < size; i++) {
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	
//}

//*************************arr_init********************
//void init_arr(int*arr,int size) {
//	int i = 0;
//	for (i = 0; i < size; i++) {
//		arr[i] = 0;
//	}
//}
//*************************print_arr********************
//void print_arr(int* arr, int size) {
//	int i = 0;
//	for (i = 0; i < size; i++) {
//		printf("%d", arr[i]);
//	}
//
//}

//*********************reverse_arr_common_sort********************'
//#include<stdio.h>
//#include<string.h>
//char* reverse_arr(const char* arr, int size) {
//	char* arr_temp = arr;
//	char temp = 0;
//	int i = 0;
//	for (i = 0; i <=size/2 ; i++) {
//		temp = arr_temp[i];
//		arr_temp[i] = arr_temp[size - i-1];
//		arr_temp[size - i-1] = temp;
//	}
//	return arr;
//}
//int main() {
//	char arr[10] = "123456789";
//	printf("%s",reverse_arr(arr, strlen(arr)));
//
//	return 0;
//}
//**************************************bubbule_sort**************************
//#include<stdio.h>
//void bubble_sort(int*, int);
//int main() {
//	int arr[] = { 2,238,9823,28,92384,9283,923,2839,929,9899 };
//	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]));
//	
//	return 0;
//}
//void bubble_sort(int* arr, int size) {
//	int i = 0;
//	int count = 0;
//	int temp = 0;
//	for (i = 0; i < size - 1; i++) {
//		for (count = 0; count < size - 1 - i; count++)
//			if (arr[count] > arr[count + 1]){
//				temp = arr[count];
//				arr[count] = arr[count + 1];
//				arr[count + 1] = temp;
//			}
//			
//	}
//	
//}
//

