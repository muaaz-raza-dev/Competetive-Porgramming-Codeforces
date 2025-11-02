#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
  int t = 0;
  scanf("%d",&t);
  int max= t;
  getchar();

  long long results[t][100] ;
  int number_results[t];
  int index= 0;
  while (t--){
    long long n =0 ;    
    scanf("%lld",&n);
    getchar();

    int pow_limit = (int)log10(n);
    int total = 0;
    long long p = 1;

    for (int i = 1; i <= pow_limit; i++) {
    p *= 10;
    }

    for (int i = pow_limit; i >0; i--) {
    if (n % (1 + p) == 0) {
        results[index][total++] = n / (1 + p);
    } 
    p/=10;
  }

  if(total ==0){
  results[index][0] = 0;
  number_results[index] = 1;
  
  }
  else number_results[index] = total;
  index++;
  }

  for (int i = 0; i < max; i++){

    if(results[i][0]) printf("%d\n",number_results[i]);
    for (int j = 0; j < number_results[i]; j++)
    {
      printf("%lld ",results[i][j]);
    }
    printf("\n");
  }
  
  
    return 0;
}
