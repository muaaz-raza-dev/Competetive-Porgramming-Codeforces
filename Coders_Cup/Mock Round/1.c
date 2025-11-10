#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int l =0 , r = 0;
    int max = 0;
    scanf("%d",&l);
    scanf("%d",&r);
    for (int i = 0; i <= (r-l); i++){
    for (int j = i+1; j <= (r-l);j++){
      int value = (l+i) ^ (l+j);
      if(value > max) max = value;
    }
    }

    printf("%d",max);
    
    return 0;
}
