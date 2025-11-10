#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main(void) {
    int t = 0;
    scanf("%d",&t);
    int t_max = t;   
    long long results[t];
    while (t--){
      int n = 0;
      scanf("%d",&n);
      long long a[n] ;
      for (int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
      }
      qsort(a,n,sizeof(long long),compare);
      long long max = 0;
      long long p_max = a[0] *a[1];
      long long n_max =a[n-1]!=0 ? a[n-1] *a[n-2]:0;
      
      results[t_max - (t+1)] = n_max > p_max ? n_max:p_max;
    }
     
    for (int i = 0; i < t_max; i++){
      printf("%lld\n",results[i]);
    }
    
    return 0;
}
