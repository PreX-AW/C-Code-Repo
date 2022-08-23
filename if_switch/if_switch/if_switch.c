#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main() {
//	int a = 0;
//	int max = 0;
//	int i = 0;
//	scanf_s("%d", &a);
//	max = a;
//	for (i = 0; i < 9; i++) {
//		scanf_s("%d", &a);
//		if (a > max)max = a;
//
//	}
//	printf("max:%d", max);
//	return 0;
////}







//#include<stdio.h>
//int main() {
//	int i = 1;
//	float n = 1;
//	float x = 0;
//	float sum = 0;
//	for (; i < 101; i++) {
//		x = n / i;
//		sum += x;
//		n = -n;
//	
//	}
//	printf("%.4f", sum);
//	return 0;
//}









//#include<stdio.h>
//int main() {
//	int i = 1;
//	int num = 0;
//	for (; i < 101; i++) {
//		if (9 == i % 10)
//			num++;
//	}
//	printf("一共%d", num);
//	return 0;
//}

//************************************************猜数字游戏*****************************************************

/*#include<time.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
void user();
int meun();
char name[20];
int input = 0;
int main() {
	srand(time(NULL));
	user();
	int judge = meun();
	int target = rand()%100;
	int count = 7;
	if (1 == judge) {
		printf("请输入你所猜测的数字：");
		while (count > 0) {
			scanf("%d", &input);
			if (input == target) {
				printf("恭喜你，猜对了%s,答案就是%d\n", name, target);
			}
			else
			{	count--;
			if (1 < count) {

				if (input > target)
					printf("你猜的比目标大哦");
				else if (input < target)
					printf("你猜的比目标数小哦");
				printf(",没关系，你还有%d次机会\n", count);
						
			}
				else if (1 == count)
					printf("最后一次机会啦，你一定可以的%s，继续输入你所猜的数吧！\n", name);
				else
					printf("没关系，过程享受了就好啦！其实答案是%d\n",target);

			}
			
		}
	}
	
	else
		printf("期待下次再见，%s!", name);
	return 0;
}

void user() {
	printf("这是一个猜数字游戏,整场游戏里面，你一共有七次机会\n");
	printf("好的，那让我们在开始游戏之前，先做一些准备工作吧！\n");
	Sleep(2000);
	system("cls");
	printf("请告诉我你的名字：");
	scanf("%s", name);
	printf("好的%s，准备工作已完成，你要开始游戏吗？", name);

}
int meun() {
	int judge = 0;
	printf("请输入确认数字：'1'.开始游戏   '0'，退出游戏\n");
	scanf("%d", &judge);
	return judge;
}



*************************二分查找******************************/
//#include<stdio.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int right = size - 1;
//	int left = 0;
//	int target = 0;
//	int find = 0;
//	printf("请输入你要查找的数字（1~10）\n");
//	scanf("%d", &target);
//
//	while (1) {
//		find = left + (right - left) / 2;
//		if (arr[find] < target) {
//			left = find;
//		}
//		else if (arr[find] > target) {
//			right = find;
//		}
//		else if (arr[find] == target)
//		{
//			printf("数字所在位置是：%d", find);
//			break;
//		}
//	}
//	return 0;
//}