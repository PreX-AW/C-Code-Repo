#define _CRT_SECURE_NO_WARNINGS 1
//**************************************����������������sort������������*******************************
//*****************************************���ʽsort*********************************************
//#include<stdio.h>
//
//int main() {
//
//	int a = 1, b = 3;
//	printf("Before:a=%d b=%d\n",a, b);
//
//	a = a + b;
//
//	b = a - b;
//
//	a = a - b;
//	printf("After:a=%d b=%d\n", a, b);
//
//	return 0;
//
//
//
//
//
//}
//**************************************����������������sort������������*******************************
//**************************************λ������sort***********************************************8
//#include<stdio.h>
//int main() {
//	int a = 11;
//	int b = 19;
//	printf("Before:a=%d b=%d\n", a, b);
//	a = a ^ a ^ b;
//	b = b ^ b ^ a;
//	printf("After:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//****************************************λ������sort�Ƕ�����1***************************************
//#include<stdio.h>
//int Number0f1(int n);
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",Number0f1(n));
//	return 0;
//}
//int Number0f1(int n) {
//	// write code here
//	int count = 0;
//	int i = 0;
//	if (0 == n) return 0;
//	else if (n > 0) {
//		for (count = 0; count < 32; count++) {
//			i += (1 & n);
//			n = n >> 1;
//
//
//		}
//		return i;
//	}
//	else if (n < 0) {
//		for (count = 0; count < 32; count++) {
//			i += (1 & n);
//			n = n >> 1;
//
//
//		}
//		return i;
//	}
//	else return 0;
//}

//*****************************************�Ƚ�������������λ���벻ͬ����*************************
//#include<stdio.h>
//int n_judge(int* n);
//int m_judge(int* m);
//int main() {
//    int n = 0, m = 0;
//    int count = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < 32; i++) {
//        if (n_judge(&n) == m_judge(&m));
//        else count++;
//
//    }
//    printf("%d", count);
//    return 0;
//}
//int n_judge(int* n) {
//    int judge = (*n & 1);
//    *n = *n >> 1;
//
//
//    return judge;
//}
//int m_judge(int* m) {
//    int judge = (*m & 1);
//    *m = *m >> 1;
//
//
//    return judge;
//}



//*************************************��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������*********************

//#include<stdio.h>
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	int Odd_temp = input;//��������
//	int Even_temp = input;//ż������
//	int Odd_arr[16];
//	int Even_arr[16];
//	Even_temp = Even_temp >> 1;
//	for (int i = 0; i < 16; i++) {
//		Odd_arr[i] = Odd_temp & 1;
//		Odd_temp =Odd_temp>> 2;
//	}
//	
//	for (int i = 0; i < 16; i++) {
//		Even_arr[i] = Even_temp & 1;
//		Even_temp =Even_temp>> 2;
//	
//	}
//	printf("This is Odd:\n");
//	for (int count = 15; count >= 0; count--) {
//
//		printf("%d", Odd_arr[count]);
//		if (0 == count)printf("\n");
//	}
//	printf("This is Even:\n");
//	for (int count = 15; count >= 0; count--) {
//
//		printf("%d", Even_arr[count]);
//	}
//	return 0;
//
//}


//************************************sort_ʮ����ת������*********************************************
//#include<stdio.h>
//int  Change_10_to_6(int);
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    Change_10_to_6(n);
//    return 0;
//}
//int Change_10_to_6(int n) {
//    if (n < 6)
//    {
//        printf("%d", n);
//        return 0;
//    }
//    else {
//        n = n / 6;
//        printf("%d", n % 6);
//
//        Change_10_to_6(n);
//        
//
//    
//    }
//    return 0;
//
//
//}


//****************************************����Ŀ��ֵ���********************************8
//#include<stdio.h>
//int main() {
//    int n = 0;
//    int target = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    while (0 != scanf("%d", &arr[i]))i++;
//    scanf("%d", &target);
//    for (int count = 0; count < n; count++) {
//        if (target == arr[count]) {
//            count++;
//            continue;
//        }
//        printf("%d ", arr[count]);
//    }
//
//    return 0;
//}

//*****************************************���Լ������С������֮��*************************
#include<stdio.h>
long  long Max(long long, long long);
long long Min(long long, long long);
int main() {
    long long a = 0;
    long long b = 0;
    scanf("%lld%lld", &a, &b);
    long long Max_Common = Max(a, b);
    long long Min_Common = Min(a, b);
    printf("%lld", Max_Common + Min_Common);
    return 0;
}
long long Max(long long a, long long b) {
    if (a > b) {
        for (long long i = b; i > 0; i--) {
            if (0 == b % i && 0 == a % i)
                return i;
        }
    }
    for (long long i = a; i > 0; i--) {
        if (0 == b % i && 0 == a % i)
            return i;
    }

    return 0;

}
long long Min(long long a, long long b) {
    if (a > b) {
        for (long  long i = a;; i++) {
            if (0 == i % a && 0 == i % b)
                return i;
        }
    }
    for (long long i = a;; i++) {
        if (0 == i % a && 0 == i % b)
            return i;
    }
    return 0;


}