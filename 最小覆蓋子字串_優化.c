#include <stdio.h>  // 輸入輸出函式庫
#include <string.h>  // 字串函式庫
int main() {
    char s[] = "xinxinpythonc";
    char t[] = "ipt";
    int need[256] = {0};  // 建立陣列:要幾個
    int window[256] = {0};  // 建立陣列:現在有幾個
    int n = strlen(s);  // n=s的長度
    int m = strlen(t);  // m=t的長度
    for (int i=0;i<m;i++) {  // 用for迴圈遍歷t加入need
        need[t[i]] ++;
    }
    int left = 0;  // 初始化left=0
    int min_len = 9999;
    int start = 0;
    for (int right=0;right<n;right++) {  // 滑動視窗遍歷s
        char c = s[right];  // 把right放進c中
        window[c] ++;  // 把c放入視窗中
        int ok = 1;
        for (int i=0;i<256;i++) {  // 遍歷window中的字元
            if (need[i]>0 && window[i]<need[i]) {  // 視窗中的字元<need，不夠
                ok = 0;
                break;
            }
        }
        while (ok) {  // 當已經滿足時
            if (right - left +1<min_len) {  // 更新最短長度
                min_len = right - left +1;
                start = left;
            }
            char left_char = s[left];  // 把最左邊的left替換掉
            window[left_char] --;
            if (need[left_char] >0 && window[left_char] < need[left_char]) {  // 檢查是否刪掉重要字元，停止縮
                ok = 0;
            }
            left ++;  // 左指標往右移
        }
    }
    if (min_len == 9999) {  // 判斷有無找到
        printf("沒有符合\n");
    } else {
        printf("最短子字串:");
        for (int i=start;i<start+min_len;i++) {  // 遍歷輸出最短字串
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}

