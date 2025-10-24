#include <stdio.h>

// Problem 231 A
int main(){
int n = 0, total_attempted = 0;
scanf("%d",&n);
int opn[n][3];
getchar();

for (int i = 0; i < n; i++){
    scanf("%d %d %d",&opn[i][0],&opn[i][1],&opn[i][2]);
    getchar();
}

for (int i = 0; i < n; i++){
    int total_votes =0;
    for (int j = 0; j < 3; j++) total_votes += opn[i][j];
    if(total_votes>=2) total_attempted++;
}

printf("%d",total_attempted);

}