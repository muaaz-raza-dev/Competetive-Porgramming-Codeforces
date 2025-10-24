#include <stdio.h>

int main(){

    int n = 0;
    int x = 0;
    scanf("%d",&n);
    getchar();
    char statements[n][4];
    for (int i = 0; i < n; i++){
        scanf("%s",statements[i]);
        getchar();
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            if(statements[i][j] == '+') {
                x++;
                break;
            }
            else if(statements[i][j] == '-'){
                x--;
                break;
            }
        }
    }
    
    printf("%d",x);

}