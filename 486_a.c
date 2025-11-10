#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long n = 0;
    scanf("%lld",&n);
    long long odd = (n + 1) / 2;
    long long even = n - odd;
    printf("%lld", (even*(even+1)) - (odd*odd) );
    return 0;
}
