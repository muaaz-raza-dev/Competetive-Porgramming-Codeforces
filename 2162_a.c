#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void*a, const void*b){
  return *(int*)b - *(int*)a;
}

int main(void) {
    int t = 0;
    scanf("%d",&t);
    int results[t];
    for (int i = 0; i < t; i++)
    {
      int n = 0;
      scanf("%d",&n);
      int a[n];
      for (int i = 0; i < n; i++) scanf("%d",&a[i]);
      
      qsort(a,n,sizeof(int),compare);
      results[i] = a[0];
    }
    
    for (int i = 0; i < t; i++){
      printf("%d\n",results[i]);
      
    }
    
        
    return 0;
}
