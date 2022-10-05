#define _CRT_SECURE_NO_WARNINGS 1
//*************************************suspect（CSDN）************************
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//		//利用ASCII码连续遍历四人
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			//判断条件，三个人只有一人说假话
//		{
//			printf("killer is  %c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}
// //*************************************suspect（MY__SELF）************************
//#include<stdio.h>
//int main() {		  //从题目要求来看，我们最终只需要一个结果，也就是谁是凶手，所以也就需要定义一个最终变量；
//	char suspect = 0;// 确定嫌疑人，一共有四种可能，分别是A,B,C,D，所用使用训话遍历的方法来实现，同时，通过各个嫌疑人的话来确定嫌疑人，四个人里面只有一个人说了假话
//					//所以使用加法来进行约束条件，也就是三个人真，一个假，总和为3；
//	for (suspect = 'A'; suspect <= 'D'; suspect++) {
//		if (3==((suspect != 'A') +(suspect == 'C') +( suspect == 'D') + (suspect != 'D')))printf("suspect is %c", suspect);
//	}
//	return 0;
//}

//****************************************跳水排名***********************************
//#include<stdio.h>
//int main() {			//从题目要求来看，相比于上一题的推测凶手，本题需要求出每个人的排名，所以考虑定义5个变量,列举出每个变量的取值可能，也就pow（5，5）
//	int a, b, c, d, e;
//	for (a = 1; a < 6; a++) {
//		for (b = 1; b < 6; b++) {
//
//			for (c = 1; c < 6; c++) {
//
//				for (d = 1; d< 6; d++) {
//
//					for (e = 1; e < 6; e++) {
//						//约束条件，每个选手话说对了一半，两个一起也就是1
//						if (1 == (2 == b) + (3 == a) &&//是需要规定两者相加是1，应为即使是2，再逻辑判断里，也被认为是1
//							1 == (2 == b) + (4 == e) &&
//							1 == (1 == c) + (2 == d) &&
//							1 == (5 == c) + (3 == d) &&
//							1 == (4 == e) + (1 == a)) {
//							//五个变量独立取值
//							if (a* b* c* d* e == 1 * 2 * 3 * 4 * 5)printf("A is %d,B is %d,C is %d,D is %d,E is %d\n", a, b, c, d, e);
//							}
//							
//
//
//					}
//				}
//
//			}
//		}
//
//	}
//
//	return 0;
//}
//***************************************pirnt 杨辉三角******************************
#include<stdio.h>
#define row 8
int main() {
	printf("The trangel trix is 8x8!\n");
	int arr[row][row];
	//初始化矩阵，左边沿数字为1
	for (int i = 0; i < 8; i++) {
		for (int ii = 0; ii < 8; ii++) {
			if (0 == ii)arr[i][ii] = 1;
			else arr[i][ii] = 0;
		}
	}
	//开始迭代计算
	for (int c_row = 1; c_row < row; c_row++) {
		for (int c_clu = 1; c_clu < c_row; c_clu++) {
			arr[c_row][c_clu] = arr[c_row-1][c_clu-1] + arr[c_row-1][c_clu];

		}
	}
	//输出
	for (int countrow = 0; countrow < row; countrow++) {
		for (int countclu = 0; countclu < countrow; countclu++) {
			printf("%d ", arr[countrow][countclu]);
		}
		printf("\n");
	}
	return 0;
}