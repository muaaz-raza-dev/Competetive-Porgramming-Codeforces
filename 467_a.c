#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    int a , b ; 
    int total = 0;
    for (int i = 0; i < n; i++){
      scanf("%d %d",&a,&b);
      if(b-a >= 2) total++;
    }

    printf("%d",total);
    
    
    return 0;
}
