#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int* arrptr = arr;
//
//	int i = 0;
//
//	for (; i < 10; i++) {
//
//		printf("%d ", *arrptr);
//
//		arrptr++;
//		
//
//	}
//
//
//
//	return 0;
//}
//#include<stdio.h>
//void Reverse_arr(char*);
//
//int main() {
//	char input[10000] = " ";
//	int n = 0;
//	do {
//		input[n] = getchar();
//		n++;
//	} while ('\n' != input[n - 1]);
//	Reverse_arr(input);
//	printf("%s\n", input);
//	return 0;
//}
//void Reverse_arr(char* input) {
//	int count = 0;
//	char* temp_input = input;
//	while ('\n' != *input) {
//		input++;
//		count++;
//	}
//	input--;
//	count--;
//	char temp = 0;
//	for (temp = 0; input > temp_input; input--, temp_input++)
//	{
//		temp = *temp_input;
//		*temp_input = *input;
//		*input = temp;
//
//	}
//}
//
//
//}

//
//#include<stdio.h>
//
//int main() {
//	char arr[10];
//	int n = 0;
//	do {
//		arr[n]=getchar();
//		n++;
//	} while ('\n' != arr[n - 1]);
//
//		return 0;
//}
//************************************打印星号菱形********************************

//#include<stdio.h>
//void print_up(char*);
//void print_down(char*);
//int main() {
//	char basic[14] = {"      *      "};
//	char* basic_ptr_center = &basic[6];
//	print_up(basic_ptr_center);
//	print_down(basic_ptr_center);
//	return 0;
//}
//void print_up(char* basic_ptr_center) {
//	int count = 0;
//	char* basic_ptr_right = basic_ptr_center;
//	char*basic_ptr_left = basic_ptr_center;
//	do {
//		printf("%s\n", basic_ptr_center - 6);
//		basic_ptr_left--;
//		basic_ptr_right++;
//		*basic_ptr_left = '*';
//		*basic_ptr_right = '*';
//		count++;
//	} while (count < 6);
//
//}
//void print_down(char* basic_ptr_center) {
//	char* basic_ptr_right = basic_ptr_center;
//	char*basic_ptr_left = basic_ptr_center;
//	int count = 0;
//	basic_ptr_right = basic_ptr_center+6;
//	basic_ptr_left = basic_ptr_center-6;
//	do {
//		if(count>1)printf("%s\n", basic_ptr_center - 6);
//		*basic_ptr_left = ' ';
//		*basic_ptr_right = ' ';
//		basic_ptr_left++;
//		basic_ptr_right--;
//
//		count++;
//	} while (count <= 6);
//}

////*****************************水仙花数**************************************
#include<stdio.h>
#include<math.h>
int per(int);
int water(int, int);
int main() {
	for (int i = 1; i <100000; i++) {
		if(i==water(i,per(i)))printf("%d ",i);
	}
	
	return 0;
}
int per(int i) {
	int count = 1;
	for (count = 1; i > 9; count++) {
		i /= 10;
	}
	return count;
}
int water(int i, int per) {
	int sum = 0;
	for (int count = 0; count < per; count++) {
		
		sum += pow(i % 10, per);
		i /= 10;
	}
	return sum;

}
//*******************************求前五项的和，a+aa+aaa+aaaa+aaaaa
//#include<stdio.h>
//
//int main(){
//	int basic = 1 + 11 + 111 + 1111 + 11111;
//
//	int a = 0;
//
//	scanf("%d", &a);
//
//	printf("%d", a * basic);
//
//	return 0;
//
//}
