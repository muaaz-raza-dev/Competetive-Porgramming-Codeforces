#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n = 0;
  scanf("%d",&n);
  char his[n+1];
  scanf("%s",his);
  int a =0;
  for (int i = 0; i < n; i++){
    if(his[i]=='A') a++;
  }
  
  printf("%s",n-a==a ? "Friendship" : ( n-a >a ? "Danik":"Anton"));
        
    return 0;
}
