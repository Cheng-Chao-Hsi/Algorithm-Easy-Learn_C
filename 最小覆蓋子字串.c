#include <stdio.h>  // 輸入輸出函式庫
#include <string.h>  // 字串函式庫
int main() {
    char s[] = "xinxinpythonc";  // 建立字串
    char t[] = "ipt";
    int need[256] = {0};  // 建立一個大小為256的整數陣列
    int window[256] = {0};  // 建立一個大小為256的整數陣列
    int n = strlen(s);  // n=s長度
    int m = strlen(t);  // m=t長度
    for (int i=0;i<m;i++) {  // for迴圈遍歷t字串
        need[t[i]] ++;
        // need['i']=1，need['p']=1，need['t']=1
    }
    int left = 0;  // 將left初始化為0，視窗為[left......right]
    for (int right=0;right<n;right++) {  // for迴圈遍歷讓右指標擴張
        char c = s[right];  // 將遍歷到的索引存入c
        // right=0 >>> 'x'，right=1 >>> 'i'
        window[c] ++;  // 加入視窗中，例如加入x>>>window['x'] = 1
        int ok=1;  // 假設符合條件1=true
        for (int i=0;i<256;i++) {  // 遍歷ASCII所有字元
            if (need[i]>0 && window[i]<need[i]) {  // need[i]>0這個字需要，window[i]<need[i]目前數量不夠
                ok = 0;  // 不成立
                    break;
            }
        }
        if (ok) {
            printf("找到一段:");
            for (int i=left;i <=right;i++) {  // 迴圈遍歷把s[left~right]輸出
                printf("%c",s[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

