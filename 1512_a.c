#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int t =0;
    scanf("%d",&t);
    int results[t];
    for (int i = 0; i < t; i++)
    {
      int n = 0;
      scanf("%d",&n);
      int a[n];
      int differ_index = -1;
      for (int i = 0; i < n; i++){
      scanf("%d",&a[i]);
      }
      
      
      for (int i = 1; i < n-1; i++){
        if(a[i] != a[i-1]  && a[i] != a[i+1]){
            differ_index = i+1;
            break;
        }
      }

      if(differ_index==-1){
          differ_index = a[0]!=a[1] ? 1 : n ;
      }
      results[i] = differ_index;
    }

    for (int i = 0; i < t; i++)
    {
      printf("%d\n",results[i]);
    }
    
        
    return 0;
}
