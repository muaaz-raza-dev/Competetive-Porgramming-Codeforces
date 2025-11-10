#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    unsigned long long n , k ;
    scanf("%llu %llu",&n,&k);
    unsigned long long  total_odds_n =  (n + (n%2!=0?1:0) ) / 2;

    if(k <= total_odds_n){
    printf("%llu",(2*k)-1  );
    return 0;
    }
    unsigned long long  evens_n = k - total_odds_n;
    printf("%llu",2*(evens_n));

    return 0;
}
