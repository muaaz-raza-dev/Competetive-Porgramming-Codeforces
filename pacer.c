#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define max(a,b) ((a) > (b) ? (a) : (b))


int main(void) {
    int t = 0;
    scanf("%d",&t);
    int max = t;
    getchar();
    int results[t];
    int count = 0 ;
    

    while (t--){
      int m , n ;
      scanf("%d %d",&n,&m);
      getchar();
      int a[n] , b[n] ;

      for (int i = 0; i < n; i++){
        scanf("%d %d",&a[i],&b[i]);
        getchar();
      }
      int total_points = 0;
      int total_break=0;
      for (int i = 0; i < n; i++){
        int points = i-1 < 0 ? a[i] : a[i] - a[i-1] ;

        if((a[i] + total_break) % 2 == 0 ){
          if(!b[i]){
            total_points += points;
          }
          else {
            total_points += max(points -1,0);
            total_break++;
          }
        } 
        else {
          if(b[i]){
            total_points += points;
          }
          else  {
          total_points += max(points -1,0);
          total_break++;
          }
        }
      }
      total_points += m - a[n-1]; 
      
      results[count] = total_points;
      count++;
    }
      
    for (int i = 0; i < max; i++){
      printf("%d\n",results[i]);
    }
    
    return 0;
}

