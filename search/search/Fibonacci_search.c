//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int fibonacciSearch(int arr[], int n, int find_key) {
//    // 피보나치 수열 초기화
//    int fib2 = 0;  // F(k-2)
//    int fib1 = 1;  // F(k-1)
//    int fib = fib2 + fib1;  // F(k)
//
//    // 탐색 범위 설정
//    int offset = -1;
//
//    while (fib < n) {
//        fib2 = fib1;
//        fib1 = fib;
//        fib = fib2 + fib1;
//    }
//
//    while (fib > 1) {
//        int i = (offset + fib2) < (n - 1) ? (offset + fib2) : (n - 1);
//
//        if (arr[i] == find_key) {
//            return i;
//        }
//        else if (arr[i] < find_key) {
//            fib = fib1;
//            fib1 = fib2;
//            fib2 = fib - fib1;
//            offset = i;
//        }
//        else {
//            fib = fib2;
//            fib1 = fib1 - fib2;
//            fib2 = fib - fib1;
//        }
//    }
//
//    if (fib1 && arr[offset + 1] == find_key) {
//        return offset + 1;
//    }
//
//    return -1;
//}
//
//int main() {
//    int arr[] = { 2, 5, 7, 12, 18, 21, 30 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int find_key;
//
//    printf("Search data -> ");
//    scanf("%d", &find_key);
//
//    int index = fibonacciSearch(arr, n, find_key);
//
//    if (index == -1) {
//        printf("Data Not found...\n");
//    }
//    else {
//        printf("Data found -> %d, Index -> % d\n", find_key, index);
//    }
//
//    return 0;
//}
