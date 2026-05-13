#include <stdio.h>  // 輸入輸出函式庫
int main() {
    char s[] = "xinxinpythonc";
    int count = 0;
    for (int i=0;s[i] != '\0';i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count ++;
        }
    }
    printf("總共有%d個母音",count);
    return 0;
}


