#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
      int t = 0;
      scanf("%d",&t);
      getchar();
      int results[t];
      results[t];
      
      
      for (int i = 0; i < t; i++){
        char a[6];
        fgets(a,6*sizeof(char),stdin);
        a[strcspn(a,"\n")] = '\0';
        
        int len = strlen(a);
        int n = a[0] - '1';
        results[i] = (n*10) + ((len*(len+1))/2);
      }

      for (int i = 0; i < t; i++){
        printf("%d\n",results[i]);
      }
      
          
    return 0;
}
