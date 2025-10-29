#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char word[1002];
    fgets(word,sizeof(word),stdin);
    word[0] = word[0] < 'a' ? word[0] : word[0]  - 32 ;
    printf("%s",word);
    return 0;
}
