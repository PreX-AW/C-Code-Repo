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
//************************************��ӡ�Ǻ�����********************************

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

////*****************************ˮ�ɻ���**************************************
//#include<stdio.h>
//
//int per_dit(int);
//
//int main() {
//
//	int input = 0;
//
//	for (input = 0; input <= 10000; input++) {
//
//		per_dig(input);
//
//		if (per_dig(input) == input)printf("%d\n", input);
//
//	}
//
//	return 0;
//}
//
//int per_dig(int input) {
//
//	int per_sum = 0;
//
//	if (input < 10)return input;
//
//	else return per_sum + per_dig(input / 10);
//
//}
//*******************************��ǰ����ĺͣ�a+aa+aaa+aaaa+aaaaa
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
