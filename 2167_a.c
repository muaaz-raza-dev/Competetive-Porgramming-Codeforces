#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int t = 0;
    scanf("%d",&t);    
    int max =t ;

  int results[t] ;
    while (t--){

      int a, b, c,d ;
      scanf("%d %d %d %d",&a,&b,&c,&d);
      results[max-(t+1)] = (a^b | b^c | c^d) == 0;
    }

    for (int i = 0; i < max; i++)
    {
      printf("%s\n",results[i] ? "YES":"NO");
    }
    
    
    return 0;
}
