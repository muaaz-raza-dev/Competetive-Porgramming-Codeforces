#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n =0 ;
    scanf("%d",&n);
    getchar();
    char strings[n][12] ;    

    for (int i = 0; i < n; i++){
        fgets(strings[i],sizeof(char)*12,stdin);
        strings[i][strcspn(strings[i],"\n")] = '\0';
    }

    char target_str[] = "codeforces";
    
    for (int i = 0; i < n; i++){
        int total_outs = 0;
        for (int j = 0; j < 10; j++){
            if(strings[i][j] != target_str[j]) total_outs++;
        }
        printf("%d\n",total_outs);
    }
    
    
    
    return 0;
}
