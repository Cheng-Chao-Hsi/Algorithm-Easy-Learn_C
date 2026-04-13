#include <stdio.h>  // 輸入輸出函式庫
#include <string.h>  // 字串函式庫
int main() {
    char s[] = "xinxinpythonc";  // 建立字串
    int count[256] = {0};  // 建立一個大小為256的整數陣列
    int k = 3;
    int distinct = 0;
    int left = 0;  // 初始化先將left和max_len設為0
    int max_len = 0;
    int n = strlen(s);  // n為字串長度

    for (int right=0;right<n;right ++) {  // for迴圈從0開始遍歷
        char c = s[right];  // 字串c設回遍歷的right
        if (count[c] == 0) {  // 如果不存在count
            distinct ++;  // 目前不同字元數量+1
        }
        count[c] ++;  // 出現次數+1
        while (distinct > k) {  // 當字元種類>k
            char left_char = s[left];  // 遍歷的left存進left_char
            count[left_char] --;  // 出現次數-1
            if (count[left_char] == 0) {  // 如果left_char這個字出現次數變成0
                distinct --;  // 種類-1
            }
            left ++;  // left索引+1
        }
        int current_len = right - left +1;  // 目前長度:right索引 - left索引+1
        if (current_len > max_len) {  // 比較目前長度大小
            max_len = current_len;  // 替換長度
        }
    }
    printf("%d\n",max_len);  // 輸出
    return 0;
}

