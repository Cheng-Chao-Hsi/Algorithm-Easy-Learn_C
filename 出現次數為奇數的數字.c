#include <stdio.h>  // 輸入輸出函式庫
int main() {
    int arr[] = {1,2,3,2,3,1,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count[100] = {0};

    for(int i=0;i<size;i++) {
        count[arr[i]] ++;
    }
    for (int i=0;i<size;i++) {
        if (count[arr[i]]%2==1) {
            printf("出現次數為奇數的數字:%d\n",arr[i]);
        }
    }
    return 0;
}


