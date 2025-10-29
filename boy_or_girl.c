#include <stdio.h>
#include <string.h>

int main(){
    char username[102];
    fgets(username,sizeof(username),stdin);
    username[strcspn(username, "\n")] = '\0';
    int username_len = strlen(username);

    int distincts_letters[26] = {0};
    int distincts = 0;

    for (int i = 0; i < username_len; i++){
        int index = username[i] - 'a';
        if(!distincts_letters[index]) distincts++;
        distincts_letters[index]  = 1 ;
    }


    
    printf("%s",distincts%2!=0?"IGNORE HIM!":"CHAT WITH HER!");
    return 0;
    
}