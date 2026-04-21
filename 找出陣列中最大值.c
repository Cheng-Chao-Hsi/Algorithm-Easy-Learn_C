#include <stdio.h>  // 輸入輸出函式庫
int main() {
    int arr[] = {3,2,7,9,5};  // 原始陣列
    int max = arr[0];  // 先將index0設為最大
    for (int i=1;i<5;i++) {  // for迴圈遍歷arr中的最大值
        if (arr[i] > max) {  // 如果遍歷到的值比max大
            max = arr[i];  // 更新最大
        }
    }
    printf("最大值:%d\n",max);  // 輸出
    return 0;
}


