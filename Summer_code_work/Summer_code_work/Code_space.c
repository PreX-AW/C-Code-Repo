#define _CRT_SECURE_NO_WARNINGS 1

//int* main(int n, int* returnSize) {
//    // write code here
//    int i = 1;
//    for (int count = 0; count < (10 ^ n) - 2; count++) {
//        returnSize[count] = i;
//        i++;
//     
//
//    }
//    
//    
//}

//*******************************************转换给定天数*****************************
//#include<stdio.h>
//int leap_years[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//int peace_years[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//char judge(int);
//int count_leap_year(int, int, int);
//int count_peace_year(int, int, int);
//int main() {
//    int years = 0;
//    int monthes = 0;
//    int days = 0;
//    scanf("%d %d %d", &years, &monthes, &days);
//    if ('y' == judge(years))
//        printf("%d", count_leap_year(years, monthes, days));
//    else
//        printf("%d", count_peace_year(years, monthes, days));
//    return 0;
//}
//char judge(int years) {
//    if (0 == years % 100) {
//        if (0 == years % 400)return 'y';
//        else return 'n';
//    }
//    else if (0 == years % 4 && 0 != years % 100)return 'y';
//    else return 'n';
//
//
//}
//int count_leap_year(int years, int monthes, int days) {
//    int sum = 0;
//    for (int i = 0; i < monthes - 1; i++)
//        sum += leap_years[i];
//    sum += days;
//    return sum;
//}
//int count_peace_year(int years, int monthes, int days) {
//    int sum = 0;
//    for (int i = 0; i < monthes - 1; i++)
//        sum += peace_years[i];
//    sum += days;
//    return sum;
//
//
//
//
//}


//***********************************尼科彻斯定理*************************************
// **********************************C99标准****************************************
//#include<stdio.h>
//void Odd_string(int);
//void Even_string(int);
//int main() {
//    int input = 0;
//    scanf("%d", &input);
//    if (0 != input % 2)
//        Odd_string(input);
//    else
//        Even_string(input);
//    return 0;
//}
//void Odd_string(int input) {
//    int arr[input];
//    arr[0] = (input * input) - 2 * (input / 2);
//    for (int i = 1; i < input; i++) {
//        arr[i] = arr[i - 1] + 2;
//    }
//    for (int count = 0; count < input; count++) {
//        if (input - 1 == count) {
//            printf("%d", arr[count]);
//            break;
//        }
//        printf("%d+", arr[count]);
//    }
//}
//void Even_string(int input) {
//    int arr[input];
//    arr[0] = (input * input) - 2 * (input / 2) + 1;
//    for (int i = 1; i < input; i++) {
//        arr[i] = arr[i - 1] + 2;
//    }
//    for (int count = 0; count < input; count++) {
//        if (input - 1 == count) {
//            printf("%d", arr[count]);
//            break;
//        }
//        printf("%d+", arr[count]);
//    }
//}


//*****************************************等差数列求和*********************************
//#include<stdio.h>
//int Seek_sum(int);
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", Seek_sum(n));
//    return 0;
//}
//int Seek_sum(int n) {
//    int sum = (2 + 2 + (n - 1) * 3) * n / 2;
//    return sum;
//
//
//}

//**************************************************记负匀正***********************************************
// **********************************************C99标准**********************************************
//#include<stdio.h>
//int count_nagetive(int arr[], int n);
//double  count_average_positive(int arr[], int n);
//int main() {
//    int n = 0;
//
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    printf("%d", count_nagetive(arr, n));
//    printf(" ");
//    printf("%.1f", count_average_positive(arr, n));
//
//    return 0;
//}
//int count_nagetive(int* arr, int n) {
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++) {
//        if (0 > arr[i])
//            count++;
//
//    }
//
//    return count;
//
//}
//double count_average_positive(int* arr, int n) {
//    int i = 0;
//    int count = 0;
//    double sum = 0;
//    for (i = 0; i < n; i++) {
//        if (0 < arr[i]) {
//            count++;
//            sum += arr[i];
//        }
//    }
//    if (0 == sum)return 0;
//    return sum / count;
//}
// 
// ************************************找出数组中最小的数*********************************88
//#include<stdio.h>
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen);
//int main() {
//    int arr[5] = { 3,4,5,1,2 };
//    printf("%d", minNumberInRotateArray(arr, 5));
//}
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//    // write code here
//    int temp = rotateArray[0];
//    for (int i = 1; i < rotateArrayLen; i++) {
//        if (temp > rotateArray[i])
//            temp = rotateArray[i];
//
//
//    }
//    return temp;
//}