#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    int max_p = 0;
    int current_passengers = 0;

    while (n--){
        int a , b ;  // a = number of passengers leaving , b = number of passengers entering
        scanf("%d %d",&a,&b);
        current_passengers = (current_passengers - a)  + b;
        if(max_p < current_passengers) max_p = current_passengers;
    }
     printf("%d",max_p);
    return 0;
}
