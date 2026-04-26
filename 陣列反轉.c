#include <stdio.h>  // 輸入輸出函式庫
void reverse(int arr[],int size) {
    int left = 0;
    int right =size - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left ++;
        right --;
        }
    }
int main() {
       int arr[] = {3,2,7,9,5,8,10};  // 原始陣列
       int size = sizeof(arr) / sizeof(arr[0]);
       reverse(arr,size);
       for (int i=0;i<size;i++) {
       printf("%d",arr[i]);
       }
    return 0;
}


