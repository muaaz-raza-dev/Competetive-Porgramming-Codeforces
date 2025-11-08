#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void*a,const void*b){
  return (*(char*)a - *(char*)b);
}

int main(void) {
    int t = 0;
    scanf("%d",&t)    ;
    int max = t;
    int results[t] ;
    while (t--){
    
    int n ;
    scanf("%d",&n);
    getchar();
    
    char cube[n+1] , name[n+1];
    
    
    scanf("%s %s",cube,name);
    
    qsort(cube,n,1,compare);
    qsort(name,n,1,compare);
    
    int is_same = 1;
      for (int i = 0; i < n; i++)
      {
        if(cube[i] != name[i]) {
          is_same = 0;
          break;
        }
      }
      

    results [max - (t+1)]  = is_same;
    
  }
  
  for (size_t i = 0; i < max; i++){
  printf("%s\n",results[i] ?"Yes":"No");
  }
  

    return 0;
}
