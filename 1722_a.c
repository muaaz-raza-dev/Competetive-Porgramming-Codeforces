#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash(char a){
  int index = -1;
  if(a=='T') index  =0;
  else if(a=='i') index  =1;
  else if(a=='m') index  =2;
  else if(a=='u') index  =3;
  else if(a=='r') index  =4;
  return index;
}

int main(void) {
    int t =0;
    scanf("%d",&t);
    while (t--){
      int n =0;
      scanf("%d",&n);
      char a[n];
      scanf("%s",a);
      getchar();
      if(n!=5){
        printf("NO\n");
        continue;
      }
      else{
        int maps[5] = {0};
        int total_valids =0;
        for (int i = 0; i < 5; i++)
        {
          int index =hash(a[i]);
          if(index != -1){
            if(maps[index]==0){
              maps[hash(a[i])] = 1;
              total_valids++;
            }
          }
        }
           
        printf("%s\n",total_valids ==5 ?"YES":"NO");
      }
      
    }
        
    return 0;
}


