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
      int n , a, b ;
      scanf("%d %d %d",&n,&a,&b);
      getchar();
      results[max-(t+1)] = n==a && a==b ? 1 :n-(a+b) >= 2;
    }
    for (int i = 0; i < max; i++){
      printf("%s\n",results[i]?"Yes":"No");
    }
    
    return 0;
}
