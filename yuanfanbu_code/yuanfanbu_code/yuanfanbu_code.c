#define _CRT_SECURE_NO_WARNINGS 1
//*************************************suspect��CSDN��************************
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//		//����ASCII��������������
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			//�ж�������������ֻ��һ��˵�ٻ�
//		{
//			printf("killer is  %c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}
// //*************************************suspect��MY__SELF��************************
//#include<stdio.h>
//int main() {		  //����ĿҪ����������������ֻ��Ҫһ�������Ҳ����˭�����֣�����Ҳ����Ҫ����һ�����ձ�����
//	char suspect = 0;// ȷ�������ˣ�һ�������ֿ��ܣ��ֱ���A,B,C,D������ʹ��ѵ�������ķ�����ʵ�֣�ͬʱ��ͨ�����������˵Ļ���ȷ�������ˣ��ĸ�������ֻ��һ����˵�˼ٻ�
//					//����ʹ�üӷ�������Լ��������Ҳ�����������棬һ���٣��ܺ�Ϊ3��
//	for (suspect = 'A'; suspect <= 'D'; suspect++) {
//		if (3==((suspect != 'A') +(suspect == 'C') +( suspect == 'D') + (suspect != 'D')))printf("suspect is %c", suspect);
//	}
//	return 0;
//}

//****************************************��ˮ����***********************************
//#include<stdio.h>
//int main() {			//����ĿҪ���������������һ����Ʋ����֣�������Ҫ���ÿ���˵����������Կ��Ƕ���5������,�оٳ�ÿ��������ȡֵ���ܣ�Ҳ��pow��5��5��
//	int a, b, c, d, e;
//	for (a = 1; a < 6; a++) {
//		for (b = 1; b < 6; b++) {
//
//			for (c = 1; c < 6; c++) {
//
//				for (d = 1; d< 6; d++) {
//
//					for (e = 1; e < 6; e++) {
//						//Լ��������ÿ��ѡ�ֻ�˵����һ�룬����һ��Ҳ����1
//						if (1 == (2 == b) + (3 == a) &&//����Ҫ�涨���������1��ӦΪ��ʹ��2�����߼��ж��Ҳ����Ϊ��1
//							1 == (2 == b) + (4 == e) &&
//							1 == (1 == c) + (2 == d) &&
//							1 == (5 == c) + (3 == d) &&
//							1 == (4 == e) + (1 == a)) {
//							//�����������ȡֵ
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
//***************************************pirnt �������******************************
#include<stdio.h>
#define row 8
int main() {
	printf("The trangel trix is 8x8!\n");
	int arr[row][row];
	//��ʼ���������������Ϊ1
	for (int i = 0; i < 8; i++) {
		for (int ii = 0; ii < 8; ii++) {
			if (0 == ii)arr[i][ii] = 1;
			else arr[i][ii] = 0;
		}
	}
	//��ʼ��������
	for (int c_row = 1; c_row < row; c_row++) {
		for (int c_clu = 1; c_clu < c_row; c_clu++) {
			arr[c_row][c_clu] = arr[c_row-1][c_clu-1] + arr[c_row-1][c_clu];

		}
	}
	//���
	for (int countrow = 0; countrow < row; countrow++) {
		for (int countclu = 0; countclu < countrow; countclu++) {
			printf("%d ", arr[countrow][countclu]);
		}
		printf("\n");
	}
	return 0;
}