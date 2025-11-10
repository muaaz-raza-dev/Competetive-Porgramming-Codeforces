#include <stdio.h>

int main(void) {
    int t = 0;
  scanf("%d",&t);
  int max = t;
  int results[t];

  while (t--){
    int n , m;
    scanf("%d %d",&n,&m);
    results[max-(t+1)] = m-n <= 0 ? 0 : m-n;
  }
  
  for (int j = 0; j < max; j++){
    printf("%d\n",results[j]);
  }
  

    return 0;
}
