#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char num1[102] , num2[102];
  fgets(num1,102,stdin);
  num1[strcspn(num1, "\n")] = '\0';
  fgets(num2,102,stdin);
  num2[strcspn(num2, "\n")] = '\0';

  int n  = strlen(num1);

  for (int i = 0; i < n; i++){
    printf("%c",num1[i] != num2[i] ? '1' : '0');
  }
  
  
  

  return 0;
}

