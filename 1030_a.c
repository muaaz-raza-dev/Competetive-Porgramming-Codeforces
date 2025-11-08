#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0 ;
    scanf("%d",&n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&c);
      if(c) {
        printf("HARD");
        return 0;
      }
    }
    printf("Easy");
        
    return 0;
}
