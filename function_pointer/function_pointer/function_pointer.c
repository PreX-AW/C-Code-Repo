#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a, target;
    scanf("%d", &a);
    int arr[a + 1];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);

    }
    scanf("%d", &target);
    int ptr = 0;
    for (ptr = 0; ptr < a; ptr++) {
        if (arr[ptr] >= target)break;
    }
    for (int i = a - 1; i > ptr; i--) {
        arr[i] = arr[i - 1];
    }
    arr[ptr] = target;

    for (int i = 0; i < a + 1; i++) {
        printf("%d ", arr[i]);

    }
    return 0;
}