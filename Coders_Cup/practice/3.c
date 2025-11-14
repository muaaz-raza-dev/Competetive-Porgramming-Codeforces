#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    scanf("%lld", &n);
    
    long long rounds = 0;
    
    while (n > 0) {
        long long temp = n;
        int digit_sum = 0;
        
        while (temp > 0) {
            digit_sum += temp % 10;
            temp /= 10;
        }
        
        n -= digit_sum;
        rounds++;
    }
    
    printf("%lld", rounds);
    return 0;
}
