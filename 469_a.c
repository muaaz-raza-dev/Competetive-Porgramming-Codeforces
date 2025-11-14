#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int len_a = 0;
    int len_b = 0;

    for (int i = 0; i < 2; i++)
    {
      int j = 0;
      getchar();
      while (getchar()!='\n'){
        if(i==0){
          scanf("%d",&a[j++]);
          len_a++;
        }
        else{
          scanf("%d",&b[j++]);
          len_b++;
        }
      }
    }

    if((len_a+len_b) < n ){
        printf("Oh, my keyboard!");
    }
    else{
      int frequency[n] ;
      int total_uniques = 0;
      for (int i = 0; i < len_a; i++){
        if(frequency[a[i]] != 1){
          frequency[a[i]] = 1;
          total_uniques++;
        }
      }

      for (int i = 0; i < len_b; i++){
        if(frequency[b[i]] != 1){
          frequency[b[i]] = 1;
          total_uniques++;
        }
      }
      printf("%s",total_uniques!=n ? "Oh, my keyboard!":"I become the guy.");
    }
          
    return 0;
}

