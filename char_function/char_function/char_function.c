#define _CRT_SECURE_NO_WARNINGS 1
//************************************strcpy_sort******************************
//#include<stdio.h>
//char* mystrcpy(char *des, char *source);
//int main() {
//	char arr1[30];
//	char arr2[] = "abcd";
//	printf("%s", mystrcpy(arr1, arr2));
//	return 0;
//}
//char* mystrcpy(char *des, char *source) {
//	for (int i = 0;; i++) {
//		*(des+i) = *(source+i);
//		if ('\0' == *(source + i))break;
//
//
//
//	}
//
//	return des;
//
//}
//***************************************strlen_sort********************************************
//#include<stdio.h>
//int my_strlen(char*);
//int main() {
//	char arr1[] = "hhhhhhhhhh";
//	printf("%d",my_strlen(arr1));
//	return 0;
//}
//int my_strlen(char* arr1) {
//	int count = 0;
//	for (count = 0; 0 != *(arr1 + count); count++);
//	return count;
//}
//***********************************************strcmp_sort***************************************
//#include<stdio.h>
//int my_strcmp(char*, char*);
//int main() {
//	char arr1[5]="abb";
//	char arr2[5]="abc";
//	//scanf("%s%s", &arr1, &arr2);
//	printf("%d",my_strcmp(arr1, arr2));
//	return 0;
//}
//int my_strcmp(char* arr1, char* arr2) {
//	while (*arr1 == *arr2) {
//		arr1++; arr2++;
//		if (!*arr1)return 0;
//	}
//	return *arr1 - *arr2;}
//		
//
//*********************************************strcat_sort*******************************************
//#include<stdio.h>
//char* my_strcat(char* dest, char* sce);
//int main(){
//	char arr1[] = "xxxxxxxxxx";
//	char arr2[] = "copychar";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//	}
//char* my_strcat(char* dest, char* sce) {
//	char* p = dest;
//	int count = 0;
//	for (count = 0; '\0' != *(sce + count); count++) {
//		*(p + count) = *(sce + count);
//	}
//	*(p + count) = '\0';
//
//
//	return dest;
//}

//**********************************************strstr_sort***************************************************
//#include<stdio.h>
//char* my_strstr(char*, char*);
//int main() {
//	char arr1[] = "abcddaddb";
//	char arr2[] = "ddd";
//	printf("%s", my_strstr(arr1, arr2));
//		return 0;
//}
//char* my_strstr(char* dest, char* sce) {
//	while (*dest) {
//		char* p1 = dest;
//		char* p2 = sce;
//		while(*p1==*p2) {
//			p1++;
//			p2++;
//			if ('\0' == *p2)return dest;
//		}
//		dest++;
//	}
//
//	return NULL;
//}