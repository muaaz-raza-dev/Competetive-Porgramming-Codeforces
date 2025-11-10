#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int t = 0;
    scanf("%d",&t);
    int results [t] ;    
    int max = t;
    while (t--){
      int a,b,c ;
      scanf("%d %d %d",&a,&b,&c);
      int sum = a+b+c;
      if(sum<10){
      results[max- (t+1)] = 0;  
      }
      else{
        int is_possible =0;
        if(a+b>=10){is_possible=1;}
        else if(b+c>=10){is_possible=1;}
        else if(a+c>=10){is_possible=1;}
        results[max- (t+1)] = is_possible;
      }
   }
for (int i = 0; i < max; i++)
{
  printf("%s\n",results[i]?"YES":"NO");
}
    
    return 0;
}
