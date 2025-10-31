#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int b_cost , amount , total_b = 0;
    scanf("%d %d %d",&b_cost,&amount,&total_b);
    
    int final_cost = b_cost*((total_b*(total_b+1))/2);
    

    
    printf("%d",amount > final_cost ? 0 : final_cost-amount);
    
    return 0;
}
