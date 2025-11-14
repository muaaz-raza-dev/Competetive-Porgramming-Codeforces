#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
      int n =0 ;
      scanf("%d",&n)  ;
      printf("%d ",n);
      while (n!=1){
        if(n%2 == 0){
          n /= 2;
        }
        else {
          
          n = n*3 +1;
        }

        printf("%d ",n);
      }
      
      return 0;
}
