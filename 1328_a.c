#include <stdio.h>

int main(void) {
    int t = 0;
    scanf("%d",&t);
    int results[t];
    int max = t;
    while (t--){

      int a , b;
      scanf("%d %d",&a,&b);
      results[max-(t+1)] = b - (a % b == 0 ? b:a % b) ;
    }
    
    for (int i = 0; i < max; i++){
      printf("%d\n",results[i]);
    }
    
    return 0;
}
