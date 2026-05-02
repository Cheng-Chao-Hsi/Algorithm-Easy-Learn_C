#include <stdio.h>  // ¿é¤J¿é¥X¨ç¦¡®w
int main() {
       int arr[] = {0,1,0,3,12};
       int new_arr[5];
       int index = 0;
       int size = sizeof(arr)/sizeof(arr[0]);
       for (int i=0;i<size;i++) {
           if (arr[i] != 0) {
               new_arr[index] = arr[i];
               index ++;
           }
       }
       for (int i=0;i<size;i++) {
           if (arr[i] == 0) {
               new_arr[index] = 0;
               index ++;
           }
       }
       for (int i=0;i<size;i++) {
          printf("%d",new_arr[i]);
       }
    return 0;
}


