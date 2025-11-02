#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[101];
  char new_str[201];
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';    
  int new_str_i = 0;
  for (int i = 0; i < strlen(str); i++){
    if(str[i] != 'A' && str[i] != 'E' &&str[i] != 'I' && str[i] != 'O'&& str[i] != 'Y'&& str[i] != 'y' &&str[i] != 'U' && str[i] != 'a' &&str[i] != 'e' &&str[i] != 'i' &&str[i] != 'o'&&str[i] != 'u' ){
      new_str[new_str_i++] = '.';
      new_str[new_str_i++] = str[i] < 'a' ? str[i] + 32 : str[i] ;
    }
  }
  new_str[new_str_i] = '\0';
  printf("%s",new_str);
  return 0;
}

