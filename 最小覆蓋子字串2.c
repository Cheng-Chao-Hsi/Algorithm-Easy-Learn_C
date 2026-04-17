#include <stdio.h>  // 輸入輸出函式庫
#include <string.h>  // 字串函式庫
int main() {
    char s[] = "XINXINPYTHONC";  // 原始字串
    char t[] = "ITP";  // 覆蓋需包含字串
    int need[256] = {0};  // 用ASCII當索引
    int window[256] = {0};
    int n = strlen(s);  // n=s字串長度
    int m = strlen(t);  // m=t字串長度
    for (int i=0;i<m;i++) {  // 遍歷t字串
        need[t[i]] ++;  // 存入need中
        }
    int need_count = 0;
    for (int i=0;i<256;i++) {
        if (need[i]>0) need_count++;
        }
    int left = 0;  // 初始化left=0
    int valid = 0;  // 初始化有效字串種類=0
    int min_len = 9999;  // 目前最短長度
    int start = 0;  // 初始化start=0，最短字串起點
    for (int right=0;right<n;right++) {  // for迴圈遍歷字串s
        char c = s[right];  // 遍歷到的字串存入c中
        window[c] ++;  // 視窗中字元+1
        if (need[c]>0 && window[c] == need[c]) {  // 條件:need中的c字元>0或是window中c字元==need中的c字元
        // 例如:need[i]=1，window[i]=1>>>valid++
            valid ++;  // 有效字元種類+1
        }
        while (valid == need_count) {  // 有效字元種類==t字串長度(所有字元都已滿足)
        if (right - left +1<min_len) {  // 如果字串長度<min_len
            min_len = right - left +1;  // 更新長度
            start = left;  // 更新left
        }
        char left_char = s[left];  // 將s字串中的left存入left_char
        window[left_char] --;  // 視窗中left_char出現次數-1，把左邊字元移出視窗
        if (need[left_char]>0 && window[left_char] < need[left_char]) {  // 條件原本滿足，現在不滿足
            valid --;  // 有效字串種類--
        }
        left ++;  // left索引++
        }
    }
        if (min_len == 9999) {  // 沒找到
            printf("no\n");
        } else {
            for (int i=start;i<start+min_len;i++) {  // 迴圈遍歷有效字串
                printf("%c",s[i]);  // 輸出
            }
            printf("\n");  // 換行
        }
    return 0;
}

