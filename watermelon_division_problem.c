#include <stdio.h>

//  Problem 4A
int main(){
    int total_weight ;

    scanf("%d",&total_weight);
    printf("%s\n",total_weight > 2 && total_weight%2 ==0?"YES":"NO");

    return 0;

}