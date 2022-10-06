#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* mystrcpy(char *des, char *source);
int main() {
	char arr1[30];
	char arr2[] = "abcd";
	printf("%s", mystrcpy(arr1, arr2));
	return 0;
}
char* mystrcpy(char *des, char *source) {
	for (int i = 0;; i++) {
		*(des+i) = *(source+i);
		if ('\0' == *(source + i))break;



	}

	return des;

}