#include <stdio.h>
#include <string.h>

int main(){
    char str1[102] , str2[102];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    int output = 0;
    for (int i = 0; i < strlen(str1); i++){
        int char_str1 = ((int)str1[i] < 97) ? ((int)str1[i] + 32) : (int)str1[i];
        int char_str2 = ((int)str2[i] < 97) ? ((int)str2[i] + 32) : (int)str2[i];
        if(char_str1 < char_str2) {output = -1; break;}
        else if(char_str2 < char_str1){ output = 1; break;}
    }
    printf("%d",output);
    
    
}