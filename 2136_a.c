#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    int t = 1;                 // number of test cases
    scanf("%d", &t);
    int results[t]  ;
    int max = t;
    while (t--) {
        int a ,b , c,d ;
        scanf("%d %d %d %d", &a,&b,&c,&d);

        int is_possible = 1;
        int higher = a > b ? a :b;
        int lower = a < b ? a : b;
        for (int i = 0; i < 2; i++){
          if(i==1) {
            higher = c > d ? c-a :d-b;
            lower = c < d ? c-a :d-b;
          }
          printf("%d %d\n",higher,lower);
          if((higher/3) > lower){
            
            is_possible = 0;
            break;
          }
        }
        results[max-(t+1)] = is_possible;
      }

    for (int i = 0; i < max; i++){
      printf("%s",results[i]?"Yes\n":"No\n");          
    }
    
    return 0;
}
