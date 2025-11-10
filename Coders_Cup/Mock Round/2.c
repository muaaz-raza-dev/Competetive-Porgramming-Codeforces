#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int t = 0;
  scanf("%d",&t);
  int max = t;
  int results[t][10000] ;
  int res_len[t];
    while (t--){
      int n , k;
      scanf("%d %d",&n,&k);
      int is_possible = (k <= ((n-2) <= 0 ? 1 : n-2));
      res_len[max-(t+1)] = is_possible ? n : -1;
      if(is_possible){
          int a= k;
          for (int i = 1; i <= n; i++){
            if(i+k> n) a = -k;
            results[max-(t+1)][i-1] = i+a;
      }
      }

    }
    for (int i = 0; i < max; i++){
      if(res_len[i]==-1) printf("%d",-1);
      for (int j = 0; j < res_len[i]; j++){
          printf("%d ",results[i][j]);
      }
        printf("\n");
    }
    
        
    return 0;
}
