#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void*a , const void*b){
  return ( *(int*)b - *(int*)a);
}
int main(void) {
    int t = 0;  
    scanf("%d",&t);  
    int max_t = t;
    int results[t];
    while (t--)
    {
      int n = 0;
      scanf("%d",&n);   
      int a[n];
      for (int i = 0; i < n; i++) scanf("%d",&a[i]);
      
    qsort(a,n,sizeof(int),compare);


      int max = a[0];
      int min = a[n-1];

      int sub_max = a[1];
      int sub_min = a[n-2];

      
      
      

      results[max_t - (t+1)] = ((max + sub_max ) - (sub_min+min));

    }


      
    for (int i = 0; i < max_t; i++){
      printf("%d\n",results[i]);
    }
    
    return 0;
}
