#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int shoe[4];
    scanf("%d %d %d %d",&shoe[0],&shoe[1],&shoe[2],&shoe[3]);
    int total = 0;
    int last_eval = -1;
    for ( int i = 0; i < 4; i++){
      if(last_eval!= -1 && last_eval == shoe[i]) continue;
      last_eval = shoe[i];
      for (int j = i+1; j < 4; j++){
        if(shoe[i] == shoe[j]) total++;
      }
    }

    printf("%d",total);
    
    return 0;
}
