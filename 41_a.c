#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char a[101] , b[101];
    scanf("%s",a);
    getchar();
    scanf("%s",b);

    int is_same  =1 ;
    int n1 = strlen(a);
    int n2 = strlen(b);
    if(n1 != n2) {
      printf("NO");
      return 0;
    }
    for (int i = 0; i < n1; i++){
      if(a[i] != b[n1-(i+1)]) {
        is_same = 0;
        break;
      }
    }

    printf("%s",is_same ? "YES":"NO");
    

    return 0;
}
