#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n = 0;
    scanf("%d",&n);
    int x,y,z; 
    int nx=0,ny=0,nz=0; 
    for (int i = 0; i < n; i++){
      scanf("%d %d %d",&x,&y,&z);
      nx += x;ny+=y;nz+=z;
    }

      printf("%s",(nx==0 && ny==0 && nz==0) ? "YES":"NO" );
    
    return 0;
}




