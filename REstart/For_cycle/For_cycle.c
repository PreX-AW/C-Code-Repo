#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	//1 + (-1 / 2) + (1 / 3) + ... + (-1 / 100);
//	//float sum = 1;
//	//float charactor = -1;
//	//for (int i = 2; i < 101; i++) {
//	//	sum =sum+ (charactor * (1.0/ i));
//	//	charactor = -charactor;
//	//}
//	//printf("%f", sum);
//	return 0;
//	
//
//
//
//}

//******************************1+...+ n!************************************
//#include<stdio.h>
//int main() {
//	int value = 0;
//	int i = 0;
//	int sum = 0;
//	int counter = 0;
//	int ret = 1;
//	scanf("%d", &value);
//	for(counter=1;counter<=value;counter++){
//		for(i=1;i<=counter;i++){
//		ret*=i;
//}
//	sum+=ret;
//    ret=1;//一轮结束后需要将ret重新置1；
//	}
//	
//	
//    printf("%d",sum);
//	return 0;
//}//


//************************************1!~n!******************************
//
//#include<stdio.h>
//int main() {
//	int value = 0;
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &value);
//	for ( i = 1; i <= value; i++) {
//		ret *= i;//避免重复计算，n!=(n-1)!*n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//**********************************half_find*******************************
//#include<stdio.h>
//int  main() {
//	int arr[10] = { 1,3,4,6,7,8,9,11,13,15 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int target = 0;
//	printf("please intput the number that you wanna find!\n");
//	scanf("%d", &target);
//	while (left <= right) {
//		mid = (left + right) / 2;//在left和right数值很大时，mid可能会超过int型所能表达的最大整数值
//								//此处可以使用mid=left+（right-left)/2
//
//		if (arr[mid] > target) {//中值大于目标值：             left     mid   target    right-->right target mid-1
//			right = mid-1;
//
//		}
//		else if (arr[mid] < target)////中值大于目标值：        left     mid   target    right-->left  target mit+1
//		{
//			left = mid+1;
//		}
//		else {
//			printf("find it!,it's arr[%d]", mid);
//			return 0;
//		}
//	}
//	 printf("sorry,you have a worry target!");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	printf("%.2f", 1.0000);
//	return 0;
//}
//****************************************refresh print*********************************
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main() {
//	char hello[] = "Hello World!";
//	char cover[]="############";
//	int  left = 0;
//	int right = strlen(hello) - 1;
//	while (left <= right) {
//		cover[left] = hello[left];
//		cover[right] = hello[right];
//		printf("%s\n", cover);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s", cover);
//
//	return 0;
//}

//**********************************shut down***************************
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//#include<stdlib.h>
//int main() {
//	char input[10] = {0};
//	system("shutdown -s -t 15");
//	while(1){
//		printf("Your computer will shutdown in 15s,plese input woshizhu to cancle this operate !\n");
//		scanf("%s", input);
//		if (strcmp(input, "woshizhu") == 0)//注意此处的strcmp比较返回值应该是0
//		{
//			system("shutdown -a");
//			printf("cancle shutdown");
//			break;
//		}
//		Sleep(1000);
//	}
//
//	return 0;
//}
//*****************************************sort user load**************************************
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	char password[] = "HWaSH150402.";
//	char input[20] = { 0 };
//	int i = 3;
//	do {
//		if (3 == i)printf("please input password :>\n");
//		else printf("plese input password again :>\n");
//		
//		scanf("%s", input);
//		if (0 == strcmp(input, password)) {
//			printf("congratulation loading sucess!"); 
//			break;
//		}
//		else {
//			i--;
//
//			if(i)printf("sorry password error! you have %d to input correct password.\n", i);
//			
//		}
//	} while (i);
//	return 0;
//}

//**************************guess number******************************
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<windows.h>
//void menu();
//void game();
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	//选择是否游戏
//	//使用do while循环，保证至少执行一次循环
//	do {
//		menu();
//		scanf("%d", &input);
//		system("cls");
//		switch (input) {
//		case 1:
//			game(); break;
//		case 0:
//			break;
//		default:
//			printf("error input,please input select correct number again\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//void menu() {
//	printf("Plese input select code :> \n");
//	printf("***************************\n");
//	printf("*******    1.Play   *******\n");
//	printf("*******    0.Exit   *******\n");
//	printf("***************************\n");
//	printf("***************************\n");
//}
//
//void game() {
//	int target = rand() % 100;
//	int guess = 0;
//	printf("Plese input the number you gusee :>\n");
//	scanf("%d", &guess);
//	while (guess - target) {
//		
//	
//		if (guess > target) {
//			printf("your guess>target,please input yourguess number again :> \n");
//		}
//		if (guess < target) {
//			printf("your guess<target,please input yourguess number again :> \n");
//		}
//		scanf("%d", &guess);
//	}
//
//		printf("conguratulation! you are right!\n");
//		return 0;
//	
//
//}
////**************************1/1-1/2+1/3-1/4.........-1/100**********************
//#include<stdio.h>
//int main() {
//	float sum = 0;
//	int times = 0;
//	int sign = 1;
//	for (times = 1; times <= 100; times++) {
//		sum += sign * (1.0 / times);
//		sign *= -1;
//	}
//	printf("%f", sum);
//	return 0;
//}
