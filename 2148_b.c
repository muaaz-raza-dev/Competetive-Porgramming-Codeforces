#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int t = 1;                 // number of test cases
    scanf("%d", &t);
    int max= t;
    int results[t];
    while (t--) {
        long long n,m,x,y;
        scanf("%lld %lld %lld %lld", &n,&m,&x,&y);
        getchar();
        long long a[n]; // constant y-values
        long long b[m]; // constant x-values
        for (int i = 0; i < n; i++) scanf("%lld",&a[i]);
        for (int i = 0; i < m; i++) scanf("%lld",&b[i]);
        
        int total_crossings = 0;        
        for (int i = 0; i < n; i++){
          if(y>=a[i]) total_crossings++;
          else break;
        }
        for (int i = 0; i < m; i++){
          if(x >= b[i]){
            total_crossings++;
          }
          else break;
        }

        results[max-(t+1)] = total_crossings;
    }    

    for (int i = 0; i < max; i++) printf("%d\n",results[i]);
    
    return 0;
}
