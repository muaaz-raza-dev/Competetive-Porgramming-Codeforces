#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int t= 0;
  scanf("%d",&t);
  for (int i = 0; i < t; i++){
    char a[101];
    scanf("%s",a);
    getchar();
    int len = strlen(a);
    if(len %2 !=0){
      printf("NO\n");
      continue;
    }
    int is_square = 1;
    int half = len/2;
    for (int j = 0; j < half; j++){
      if(a[j]!=a[j+half]){
        is_square = 0;
        break;
      }
    }
    printf("%s\n",is_square ? "YES":"NO");
    
  }
  
    
  return 0;
}
