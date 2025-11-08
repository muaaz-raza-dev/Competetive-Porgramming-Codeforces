#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    int prev = -1;
    int c = 0;
    int total_groups = 1;
    for (int i = 0; i < n; i++){
      scanf("%d",&c);
      if(prev != -1  && prev!=c){
          total_groups++;
      }
      prev = c;
    }
    printf("%d",total_groups);
    return 0;
}
