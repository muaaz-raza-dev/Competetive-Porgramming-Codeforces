#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void*a, const void*b){
  return ((*(int*)a )- (*(int*)b));
}
int main(void) {
    int n = 0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n-1; i++)
    {
    scanf("%d",&a[i]);
    }
    qsort(a,(n-1),sizeof(int),compare);

    
    if(a[0] != 1){
      printf("%d",1);
      return 0;
    }
    else if(a[n-2] != n ){
      printf("%d",n);
      return 0;
    }
    
    
    for (int i = 0; i < n-2; i++){
      if(a[i+1] != a[i]+1){
        printf("%d",a[i]+1);
        break;
      }
    }
    
    return 0;
}
