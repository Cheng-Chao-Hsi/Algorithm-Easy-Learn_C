#include <stdio.h>  // 輸入輸出函式庫
int main() {
    int nums[] = {1,2,3,1};  // 原始陣列
    int n = 4;  // 陣列長度
    int map[100] = {0};  // 用陣列模擬set，map[x] = 0沒出現過，=1出現過
    for (int i=0;i<n;i++) {  // for迴圈遍歷陣列
        int num = nums[i];  // 把遍歷到的數存入num中
        if (map[num] == 1) {  // 如果有出現過
            printf("True\n");  // 輸出True
            return 0;  // 結束整個程式
        }
        map[num] = 1;  // 如果沒出現過，記錄這個數字
    }
    printf("False\n");  // 如果整個迴圈跑完沒有重複，輸出False
    return 0;
}


