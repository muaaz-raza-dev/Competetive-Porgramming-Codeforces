#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    getchar();
    char word[n+1] ; 
    scanf("%s",&word);
    if(n<26) {
      printf("NO");
      return 0;
    }

    char letters[26] ={0};
    int total = 0;
    for (int i = 0; i < n; i++){
      int ind  = 0;
      if(word[i] <= 'Z') ind = word[i] - 'A';
      else ind = word[i] - 'a';
      if(!letters[ind]) total++;
      letters[ind]=1;
    }
    
    printf("%s",total>=26?"YES":"NO");
    return 0;
}
