#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int number_stones ;
    char stones_seq[52];
    scanf("%d",&number_stones);
    getchar();
    fgets(stones_seq,sizeof(stones_seq),stdin);
    stones_seq[strcspn(stones_seq, "\n")] = '\0';
    int total_removals = 0;
    for (int i = 0; i < strlen(stones_seq); i++){
            if((i+1)<strlen(stones_seq) && stones_seq[i] == stones_seq[i+1]) total_removals++;
    }
    printf("%d",total_removals);
    
    return 0;
}
