#include <stdio.h>
#include <string.h>

//  Problem 71A
int main(){
    int n  = 0;
    scanf("%d",&n);
    getchar();

    char words[n][101];
    for (int i = 0; i < n; i++){
        scanf("%s",words[i]);
        getchar();
    }

    for (int i = 0; i < n; i++){
        if(strlen(words[i]) > 10){
            int total = strlen(words[i])-2;
            int m = 0;
            
            if(total >= 10){
                words[i][1] = (char)(48 + (total / 10)) ;
                words[i][2] = (char)(48 + (total % 10)) ;
                m = 1;
            }
            else {
                words[i][1] = (char)(48 +total);
            }
            words[i][m+2] = words[i][strlen(words[i])-1];
            words[i][m+3] = '\0';
        }
        printf("%s",words[i]);
        if(i!=n-1) printf("\n");
    }
    
    

}