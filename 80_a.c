#include <stdio.h>
#include <math.h>

int main(void) {
      int n , k ;
      scanf("%d %d",&n,&k);
      int is_next_prime = 0;
      for (int i = 1; i <= (k-n); i++){
          int target = n+i;
            int limit = sqrt(target);
            int is_local_prime = 1;
          for (int i = 2; i <= limit; i++){
                if(target%i==0){
                  is_local_prime = 0;
                  break;
                }
  }
  if(is_local_prime ){
        if(target==k){
          is_next_prime =1;
        }
        else{
          break;
        }
  }
      }

      printf("%s",is_next_prime?"YES":"NO");
      
    return 0;
}
