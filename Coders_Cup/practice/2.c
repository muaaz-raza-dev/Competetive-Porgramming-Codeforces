#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n=0 , k = 0;
    scanf("%d %d",&n,&k);
    int a[51] = {0};
    int current = 0;
    int uniques = 0;

    for (int i = 0; i < n; i++){
        scanf("%d",&current);
        if(a[current]==0){
          a[current] = 1;
          uniques++;
        }

      }


    printf("%d",uniques>k ? k : uniques);
    
    return 0;
}

