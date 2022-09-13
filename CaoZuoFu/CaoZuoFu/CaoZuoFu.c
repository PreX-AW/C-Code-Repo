#define _CRT_SECURE_NO_WARNINGS 1
//**************************************不创建第三个变量sort整数两数交换*******************************
//*****************************************表达式sort*********************************************
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
//**************************************不创建第三个变量sort整数两数交换*******************************
//**************************************位操作符sort***********************************************8
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

//****************************************位操作符sort记二进制1***************************************
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

//*****************************************比较两整数二进制位补码不同次数*************************
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



//*************************************获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列*********************

//#include<stdio.h>
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	int Odd_temp = input;//奇数部分
//	int Even_temp = input;//偶数部分
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


//************************************sort_十进制转六进制*********************************************
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


//****************************************跳过目标值输出********************************8
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

//*****************************************最大公约数和最小公倍数之和*************************
#include<stdio.h>
int Max_Common(int a, int b);
int Min_Common(int a, int b);
int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int Max = Max_Common(a, b);
    int Min = Min_Common(a, b);
    printf("%d", Max+Min);
    return 0;
}
int Max_Common(int a, int b) {

    if (b >= a) {
        int count = 0;
        for ( count = a;; count--) {
            if (0 == a % count && 0 == b % count)
                break;
        }
        return count;
    }
    else if (a > b) {
        int count = 0;

        for (int count = b;; count--) {
            if (0 == a % count && 0 == b % count)
                break;
        }
        return count;
    }

}
int Min_Common(int a, int b) {

    if (a >= b) {
        int count = 0;
        for (count = a;; count++) {
            if (0 == a % count && 0 == b % count)
                break;
        }
        return count;
    }
    else if (b > a) {
        int count = 0;
        for (count = b;; count++) {
            if (0 == count%a && 0 == count%b)
                break;
        }
        return count;
    }
}