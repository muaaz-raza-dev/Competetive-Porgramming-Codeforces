#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int t = 1;                 // number of test cases
    scanf("%d", &t);
    int results[t];
    int max = t;
    while (t--) {
        int a,b,c;
        scanf("%d %d %d", &a,&b,&c);
        int x = a ^ b ^ c;
        results[max-(t+1)] = x;
    }
    for (int i = 0; i < max; i++)
    {
      printf("%d\n",results[i]);
    }
    
    return 0;
}
