#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
      int  t = 0;
      scanf("%d",&t);
      int min =0; 
      for (int i = 0; i < t; i++){
      int  n = 0;
      scanf("%d",&n);
      long long a[n];

      long long min = 2e9;

      for (int i = 0; i < n; i++){
      scanf("%lld",&a[i]);
      if(a[i]<min){
        min = a[i];
      }
    }
      int is_negative =0 , is_negative_exist = 0 ;
      long long local_e_sum =0 , abs_e_sum =0 ;
      long long array_sum = 0;
    for (int i = 0; i < n; i++){
      if(a[i]<0){
        is_negative_exist =1;
        if(!is_negative){
          is_negative = 1;
        }
        local_e_sum += a[i];
      }
      else if(is_negative_exist){
        if(local_e_sum  < abs_e_sum){
          abs_e_sum = local_e_sum;
        }
        local_e_sum = 0;
        is_negative =0 ;
      }

      array_sum+= a[i];
    }
    
    if(!is_negative_exist){
      abs_e_sum = min;
    }
    else if(local_e_sum  < abs_e_sum){
          abs_e_sum = local_e_sum;
    }

    printf("%lld\n",array_sum-abs_e_sum);

}
      

    return 0;
}

