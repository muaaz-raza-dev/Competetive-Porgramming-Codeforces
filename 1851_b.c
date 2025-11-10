#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
    int t = 0;
    scanf("%d",&t);
    int max = t;
    int results[t];
      while (t--){
        int n = 0;
    scanf("%d",&n);
    int a[n];
    int total_evens;
    
    for (int i = 0; i < n; i++){
      scanf("%d",&a[i]);
      if(a[i]%2==0) total_evens++;
    }
    if(total_evens == n ||total_evens==0){
      results[max - (t+1)] = 1;
    }
    else{
      
      int b[n];
        for (int i = 0; i < n; i++) b[i] = a[i];
        qsort(b, n, sizeof(int), compare);

        
        int can_sort = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != b[i] % 2) {
                can_sort = 0;
                break;
            }
      }

      results[max - (t+1)] = can_sort;

    }

        

      }
      
      for (int i = 0; i < max; i++){
        printf("%s\n",results[i]?"YES":"NO");
      }
      
    return 0;
}





