#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n =0;
    int t =0;
    scanf("%d %d",&n,&t);
    getchar();
    char queue[n+1];
    scanf("%s",queue);
    for (int i = 0; i < t; i++){
      for (int j = 0; j < n-1; j++){
        if(queue[j]=='B' && queue[j+1] == 'G'){
          int temp = queue[j];
          queue[j] = queue[j+1];
          queue[j+1] = temp;
          j++;
        }
      }
    }
    printf("%s",queue);
    
    return 0;
}
