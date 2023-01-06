#define _CRT_SECURE_NO_WARNINGS
//**********************************is_primer**************************
//#include<stdio.h>
//#include<math.h>
//void is_primer(int);
//int main() {
//	int i = 100;
//	for (i = 100; i <= 200; i++) {
//		is_primer(i);
//	}
//	return 0;
//}
//void is_primer(int value) {
//	int factor = 2;
//	for (value; factor < sqrt(value); factor++) {
//		if (0 == value %factor)return 0;
//	}
//	printf("%d ", value);
//}

//********************************leap_year_judge****************************
//#include<stdio.h>
//void leap_year_judge(int);
//int main() {
//	int year = 1000;
//	for (year; year < 2001; year++) {
//		leap_year_judge(year);
//	}
//	return 0;
//}
//void leap_year_judge(int year) {
//	if (((0 == year % 4) && (0 != year % 100) || 0 == year % 400))//四年一润，百年不润，四百年润
//		printf("%d is leap year\n", year);
//
//}

//**************************************辗转相除法求解最大公约数********************









//***********************************print99乘法表*********************************
//#include<stdio.h>
//int main() {
//	int row = 0;
//	int column = 0;
//	for (row = 1; row < 10; row++) {
//		for (column = 1; column <= row; column++) {
//			printf("%d x %d =%d ", row, column, row * column);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//***************************MAX_of_ten_number************************
//#include<stdio.h>
//int main() {
//	int max = 0;
//	int arr[10] = { 0 };
//	scanf("%d", &arr[0]);
//	max = arr[0];
//	for (int i = 1; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}

