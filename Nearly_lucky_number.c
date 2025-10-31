#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char number[20];
    fgets(number,sizeof number , stdin);
    number[strcspn(number, "\n")] = '\0';
    int total_lucky =0 ;
    for (int i = 0; i < strlen(number); i++){
        if(number[i]=='4'||number[i]=='7') total_lucky++;
    }
    printf("%s",(total_lucky==4||total_lucky==7 )? "YES":"NO");
    return 0;
}
