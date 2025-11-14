#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
      int t = 0;
        scanf("%d",&t);

      for (int i = 0; i < t; i++)
      {
        int n = 0;
        scanf("%d",&n);
        int min = 1e6;
        int a  =0 ;
        for (int j = 0; j < n; j++){
          scanf("%d",&a);
          if(a<min) {min=a;}
        }

        printf("%d\n",min);
        
      }
          
    return 0;
}

