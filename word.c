#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char word[102];
    fgets(word,sizeof(word),stdin);
    word[strcspn(word, "\n")] = '\0';
    int total_upper_case =0;
    for (int i = 0; i < strlen(word); i++){
        if(word[i] >= 'A' && word[i] <= 'Z')total_upper_case++;
    }

    if((strlen(word)-total_upper_case) >= total_upper_case){
    for (int i = 0; i < strlen(word); i++){
            word[i] = word[i] > 'Z' ? word[i] : word[i] + 32;
        }}
    else {
    for (int i = 0; i < strlen(word); i++){
        
            word[i] = word[i] < 'a'?word[i] : word[i] - 32;
        }
    }
    
    printf("%s",word);
    return 0;
}
