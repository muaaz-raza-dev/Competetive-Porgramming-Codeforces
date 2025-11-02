#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    n++;
    int max_col = n*2 - 1;

    int is_reverse = 0;
    for (int i = 0; is_reverse ? i>=0 : i <= n; is_reverse ?  i--:i++){
      if(i+1 == n) is_reverse = 1;
      int items = 2*i + 1 ;
      
      for (int j = 0; j < max_col-( items ); j++){
        printf(" ");
      }

      int num = 0;
      int max_reached = 0;
      for (int j = 1; j <= items; j++){
        printf("%d",num);
        if(j!=items)printf(" ");
        if( max_reached || num >= items-(i+1)){
        num--;
        max_reached = 1;
        }
        else num++;
      
      }
        printf("\n");
    }

    
    
    return 0;
}
