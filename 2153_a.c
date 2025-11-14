#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int t = 0;
    scanf("%d",&t);
    while (t--)
    {
      int n = 0;
    scanf("%d",&n);
    int a[100] = {0} ;
    int curr =0 ;
    int total_unique = 0;
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&curr);
      if(a[curr-1]==0){
        total_unique++;
        a[curr-1] = 1;
      }
    }
    
    printf("%d\n",total_unique);
    }
        
    return 0;
}

