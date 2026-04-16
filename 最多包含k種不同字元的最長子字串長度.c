#include <stdio.h>  // 輸入輸出函式庫
#include <string.h>  // 字串函式庫
int main() {
    char s[] = "eceba";  // 原始字串
    int k = 2;  // 最多可以兩種不同字元
    int count[256] = {0};  // 用ASCII當索引
    int distinct = 0;  // 不同字元數量
    int left = 0;  // 初始化變數，視窗左邊界=0
    int max_len = 0;  // 答案(最長長度)
    int n = strlen(s);  // n=字串長度
    for (int right=0;right<n;right++) {  // 遍歷right是窗往右擴張
        char c = s[right];  // 遍歷到的right存入c中
        if (count[c] == 0) {  // 如果count[c]中是沒出現過的新字元
            distinct ++;  // 種類+1
        }
        count[c] ++;
        while (distinct > k) {  // 種類>k不合法，需縮小
            char left_char = s[left];  // 將最左邊的字存入left_char中
            count[left_char] --;  // 縮小
            if (count[left_char] == 0) {  // 如果縮小後出現次數=0
                distinct --;  // 種類-1
            }
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

