#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a,const void*b){
  return (*(int*)a - *(int*)b);
}

void runningSum(int* nums, int numsSize) {
    int pref_sum[numsSize] ;

    for (int i =0 ; i<numsSize ; i++){
        pref_sum[i] = 0;
        pref_sum[i] += ((i-1 < 0 )? 0 :  pref_sum[i-1]) + nums[i];
    }    
    for (int i =0 ; i<numsSize ; i++){
      printf("%d\n",pref_sum[i]);
    }    
}

int main(void) {

  int nums[4]=  {1,2,3,4};
  runningSum(nums,4);
  
    return 0;
}
