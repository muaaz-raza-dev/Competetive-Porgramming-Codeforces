#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char summan[102];
    fgets(summan,sizeof(summan),stdin);
    int summan_string_len = strlen(summan) - 1;

    int nums[50] = {0};
    int total_nums = 0;

    for (int i = 0; i < summan_string_len; i+=2){
        nums[i/2] = (int)summan[i] - 48;
        total_nums++;
    }
    
    for (int i = 0; i < total_nums; i++){
        for (int j = 0; j < total_nums-i; j++){
            if(j+1>=total_nums) break;
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    

    for (int i = 0; i < total_nums; i++){
        printf("%d",nums[i]);
        if(i!=total_nums-1)printf("+");
    }
    
    

    return 0;
}

