#include <stdio.h>
#include <math.h>

int main() {
    long long m, n, a;
    scanf("%lld %lld %lld", &m, &n, &a);

    long long x_dir = (m + a - 1) / a;  
    long long y_dir = (n + a - 1) / a;

    printf("%lld", x_dir * y_dir);
    return 0;
}
