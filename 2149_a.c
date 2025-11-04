#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int t = 0;
    scanf("%d",&t);
    getchar();
    int max = t;
    int results[10000];

    while (t--){
      int n  = 0;
      scanf("%d",&n);
      int a[n];
      int total = 0 ;
      int total_negatives = 0;
      int current_elem ; 
      for (int i = 0; i < n; i++){
        scanf("%d",&current_elem);
        if(current_elem==0) total++;
        else if(current_elem==-1) total_negatives++;
      }
      if(total_negatives%2 !=0) total+=2;

      results[max-(t+1)] = total;
    }    

    for (int i = 0; i < max; i++){
      printf("%d\n",results[i]);
    }

    return 0;
}
