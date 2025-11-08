#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
   int t = 0;
    scanf("%d",&t)    ;
    int max = t;
    int results[t][2*100000] ;
    int results_n [t];
    while (t--){
    long long n ;
    scanf("%lld",&n);
    results_n[max- (t+1)] = n ;
    int a[n];

    for (int i = 0; i < n; i++){
      scanf("%d",&a[i]);
    }
    
    
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
          if( a[j] > a[j+1] && (a[j] % 2 != a[j+1] % 2)){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
          }
        }
    }

    for (int i = 0; i < n; i++){
        results[max - (t+1)][i] = a[i];
      }
      
    }     

    for (int i = 0; i < max; i++){
      for (int j = 0; j < results_n[i]; j++){
        printf("%d ",results[i][j]);
      }
      printf("\n");
      
    }
    
    return 0;
}
