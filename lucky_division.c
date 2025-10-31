#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  char num_char[5] ;
  fgets(num_char,sizeof(num_char),stdin);
  num_char[strcspn(num_char,"\n")] = '\0';
  
  int exp = strlen(num_char);
  int digits[3] ;
  digits[0]= num_char[0]!='n' ? num_char[0] - '0' : 1;
  digits[1]= num_char[1]!='n' ? num_char[1] - '0' : 1;
  digits[2]= num_char[2]!='n' ? num_char[2] - '0' : 1;
  
  int number = 0 ;

  int is_all_lucky = 1;

  for (int i = exp; i > 0; i--){
    number += digits[exp-i]*(i == 3 ? 100 : i ==2 ? 10 : 1);
    if (is_all_lucky && digits[i-1]!=7 &&digits[i-1]!=4){
      is_all_lucky=0;
    }
  }
  printf("%s",is_all_lucky ? "YES":(number%4 ==0 ||number%7 ==0 || number%47 ==0 || number %77 ==0 || number %44==0 || number%74==0) ? "YES":"NO");
  
  return 0;
}