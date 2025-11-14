#include <stdio.h>

int main(void) {
    int n ,  k;
    scanf("%d %d",&n,&k)    ;
    int total = 1;
    int init = n;
    while (n%10 != 0 && n%10 != k){
      n += init;
      total++;
    }

    printf("%d",total);
    
    
    return 0;
}
