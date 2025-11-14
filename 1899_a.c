#include <stdio.h>

int main(void) {
      int t =0;
      scanf("%d",&t)   ;
      int results [t];
      for (int i = 0; i < t; i++)
      {
        int n =0;
        scanf("%d",&n);
        results[i] = n%3==0;
      }
      
      for (int i = 0; i < t; i++)
      {
        printf("%s\n",results[i]?"Second":"First");
      }
      
    return 0;
}
