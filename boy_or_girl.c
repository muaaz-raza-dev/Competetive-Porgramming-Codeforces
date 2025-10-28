#include <stdio.h>
#include <string.h>

int main(){
    char username[101];
    fgets(username,sizeof(username),stdin);
    int username_len = strlen(username) - 1 ;

    int non_distincts = 0;
    for (int i = 0; i < username_len; i++){
        for (int j = 0; j < username_len; j++){
            if(i != j && username[i] == username[j])non_distincts++;
        }
    }
    int distincts =username_len-non_distincts;
    printf("%s",distincts%2!=0?"IGNORE HIM!":"CHAT WITH HER!");
    return 0;
    
}