#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    if(n<7){

      int is_prime = 1;

      if(n%2 ==0 || n%3 ==0 ){
        is_prime = 0;
      }
      
      printf("%s",is_prime ? "YES" : "NO");
      
      
    }
    else{
      printf("NO");
    }

   
    return 0;
}

