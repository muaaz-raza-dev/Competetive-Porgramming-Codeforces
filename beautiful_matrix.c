#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int m[5][5] ={0};
    for (int i = 0; i < 5; i++){
        for (int j = 0; j <5; j++){
            scanf("%d",&m[i][j]);
        }
    }
    int one_row =0 , one_col  = 0;
    int *p = &m[0][0];
    for (int i = 0; i < 25; i++){
        if(*(p+i)){
             one_row = ceil((float)(i + 1) / 5);
             one_col = (i+1) % 5 ==0 ? 5 : (i+1)%5;
        }
    }
    printf("%d",abs(3-one_row)+abs(3-one_col));
}