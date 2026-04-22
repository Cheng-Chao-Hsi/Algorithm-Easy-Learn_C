#include <stdio.h>  // 輸入輸出函式庫
int main() {
    int arr[] = {3,2,7,9,5,8,10};  // 原始陣列
    int evens[] = {};
    int j = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i=0;i<len;i++) {
        if (arr[i]  %2 == 0) {
            evens[j] = arr[i];
            j ++;
        }
    }
    for (int i=0;i<j;i++) {
        printf("偶數:%d\n",evens[i]);  // 輸出
        }
    return 0;
}


