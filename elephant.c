#include <stdio.h>
#include <math.h>

int main(void) {
    int x =0;
    scanf("%d",&x);
    int min_steps = floor(x/5) + (x%5?1:0);

    printf("%d",min_steps);

    return 0;
}
