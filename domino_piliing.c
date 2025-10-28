#include <stdio.h>

int main(){
    int m=0,n=0 ;
    scanf("%d %d",&m,&n);
    int area_rectangle = m*n , total_domino = 0;
    if(area_rectangle%2 != 0 )  --area_rectangle;
    total_domino = area_rectangle/2;
    printf("%d",total_domino);
    return 0;
}