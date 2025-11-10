#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
      printf("I ");
      printf("%s",i%2==0?"love ":"hate ");
      printf("%s",i==n?"it":"that ");
    }
        
    return 0;
}
