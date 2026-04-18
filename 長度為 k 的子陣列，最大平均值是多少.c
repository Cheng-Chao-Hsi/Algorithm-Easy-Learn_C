#include <stdio.h>  // 輸入輸出函式庫
int main() {
    int nums[] = {1,12,-5,-6,50,3};  // 原始陣列
    int k = 4;  // 固定視窗大小
    int n = 6;  // 陣列長度
    int window_sum = 0;  // 初始化設視窗總和為0
    for (int i=0;i<k;i++) {  // 遍歷前k個字串
        window_sum += nums[i];  // 將前k個總和加入window_sum中
        }
    int max_sum = window_sum;  // 將window_sum的值存入max_sum中
    for (int i=k;i<n;i++) {  // for迴圈遍歷nums
        window_sum += nums[i];  // 遍歷到的nums[i]存入window_sum中
        window_sum -= nums[i-k];  // 移除最左
        if (window_sum > max_sum) {  // 如果新視窗的值更大就更新最大
            max_sum = window_sum;
        }
            }
            printf("%f\n",(double)max_sum/k);  // 輸出
    return 0;
}

