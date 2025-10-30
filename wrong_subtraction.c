#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n,k;
    scanf("%d %d",&n,&k);

    for (int i = 0; i < k; i++)
    {
        if(n%10 == 0){
            n /= 10;
        }
        else n--;
    }

    printf("%d",n);
    
    
    return 0;
}
