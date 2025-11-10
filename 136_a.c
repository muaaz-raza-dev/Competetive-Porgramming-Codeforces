#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    int maps[n];
    int current = 0;
    for (int i = 0; i < n; i++){
      scanf("%d",&current);
      maps[current-1] = i;
    }

    for (int i = 0; i < n; i++){
      printf("%d ",maps[i]+1);
    }
    
    return 0;
}
