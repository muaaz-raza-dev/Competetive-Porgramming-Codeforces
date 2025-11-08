#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, h = 0;
    scanf("%d %d",&n,&h);

    int a[n] ;
    int total_taller = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > h) total_taller++;
    }
    
    printf("%d",n + total_taller);
    
       
    return 0;
}
