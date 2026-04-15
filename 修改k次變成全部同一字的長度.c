#include <stdio.h>  // 輸入輸出函式庫
#include <string.h>  // 字串函式庫
int main() {
    char s[] = "AABABBA";  // 原始字串
    int k = 1;  // 最多可以修改一字元
    int count[256] = {0};  // 用ASCII當索引
    int left = 0;  // 初始化變數，視窗左邊界=0
    int max_count = 0;  // 目前視窗中最多字元數量
    int max_len = 0;  // 答案(最長長度)
    int n = strlen(s);  // n=字串長度
    for (int right=0;right<n;right++) {  // 遍歷right是窗往右擴張
        char c = s[right];  // 遍歷到的right存入c中
        count[c] ++;  // 把字元放入視窗中
        if (count[c]>max_count) {  // 如果count[c]>目前視窗最多字元
            max_count = count[c];  // 更新最大
        }
        while ((right - left +1) - max_count > k) {  // 需修改數量 = 視窗長度 - max_count，right - left +1 為視窗長度
        // 需修改數量>k表示不合法，必須縮小視窗
            char left_char = s[left];  // 將最左邊的字存入left_char中
            count[left_char] --;  // 縮小
            left ++;  // left的索引+1
        }
        int current_len = right - left +1;  // 移除後更新目前視窗長度
        if (current_len > max_len) {  // 更新目前最大長度
            max_len = current_len;
        }
    }
    printf("%d\n",max_len);  // 輸出
    return 0;
}

