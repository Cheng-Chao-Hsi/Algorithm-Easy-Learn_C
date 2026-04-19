#include <stdio.h>  // 輸入輸出函式庫
int main() {
    int nums[] = {2,7,11,15};  // 原始陣列
    int target = 9;  // 目標總和
    int n = 4;  // 陣列長度
    int map[100] = {0};  // 用陣列模擬python的dict
    // map[x] 為某個index，max[x] = 0表示沒出現過
    for (int i = 0;i<n;i++) {  // 用for迴圈遍歷nums，i=0,1,2,3
        int num = nums[i];   // 將遍歷到的i存入num，i=0時nums[0] = 2
        int need = target - num;  // 目標總和-num存入need
        if (map[need] != 0) {  // 檢查有沒有出現過，!=0就是有出現過
            printf("%d%d\n",map[need]-1,i);  // 因為存的是i+1，所以要-1
                break;
        }
        map[num] = i+1;  // 把現在這個數存起來
    }
    return 0;
}
// i=0時，num = 2，need = 7，map[7] = 0 >>> 沒出現過
// map[2] = 0+1，map[2] = 1
// i = 1時，num = 7，need = 2，map[2] = 1>>>出現過
// index = 1-1=0，輸出 0 1

