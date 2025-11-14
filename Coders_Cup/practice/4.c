#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char a[5];
    scanf("%s",a);
    int len = strlen(a);
    long long total_combinations = 1;
    int total_c = 0;
    for (int i = 0; i < len-1; i++){
          int multiplier = a[i] == 'd' ? 10:26;
          total_combinations *= (multiplier-total_c);
          if(a[i] == a[i+1]){
          total_c++;
        }
        else {
          total_c = 0 ;
        }
    }
    int multiplier = a[len-1] == 'd' ? 10:26;
    total_combinations *= (multiplier-total_c);

    printf("%lld",total_combinations);
    return 0;
}
