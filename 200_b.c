#include <stdio.h>

int main(void) {
    int t, x, sum = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &x);
        sum += x;
    }
    printf("%.12f", (float)sum / t);
    return 0;
}
