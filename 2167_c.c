#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void*a, const void*b){
  return *(int *)a - *(int*)b;
}

int main(void) {
   int t = 0;
    scanf("%d",&t);
    int max = t;
    
    long long **results = malloc(t * sizeof(long long*));
    
    int results_n [t];
    while (t--){
    int ind = max- (t+1);
    long long n =0;
    scanf("%lld",&n);
    
    results_n[ind] = n ;
    long long a[n];
    results[ind] = malloc(n * sizeof(long long)); 

    long long b[n];
    for (int i = 0; i < n; i++){
      scanf("%lld",&a[i]);
      b[i]=a[i];
    }

    qsort(b,n,sizeof(long long),compare);
    
    
    

    for (int i = 0; i < n; i++){
      printf("%lld %lld\n",a[i] , b[i]);
      if((a[i]%2) != (b[i]%2)){
        results[ind][i] = b[i];

      }
      else {
        results[ind][i] = a[i];
      }
    }

    }     

    for (int i = 0; i < max; i++){
      for (int j = 0; j < results_n[i]; j++){
        printf("%lld ",results[i][j]);
      }
      printf("\n");
    }
    
    return 0;
}







     
     
     
      
     
  
     
     