#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int t =0;
    scanf("%d",&t);

    int max = t;
    int results[t];
    while (t--){
      int n = 0;
      scanf("%d",&n);
      char a[n+1] , b[n+1] ;
      scanf("%s",a);
      getchar();
      scanf("%s",b);
      int sum =0;
      int is_one =0;
      for (int i = 0; i < n; i++){
          if(a[i]=='1' && b[i]=='1') sum++;
          else if(a[i]=='1'||b[i]=='1') is_one=1;
      }
      if(sum==n ){
          results[max - (t+1)] = (sum%2!=0);
      }
      else {
        
        results[max - (t+1)] = (sum%2==0) ? is_one : 1 ;
      }

           
    }
    for (int i = 0; i < max; i++)
    {
      printf("%s\n",results[i]?"YES":"NO");
    }
    
    return 0;
}
