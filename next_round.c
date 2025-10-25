#include <stdio.h>
// 158 A
int main(){
    int n=0,k=0;
    scanf("%d %d",&n,&k);
    getchar();
    int scores[n];

    for (int i = 0; i < n; i++){
        scanf("%d",&scores[i]);
        if (getchar() == '\n') break;
    }

    int target_score = scores[k-1];
    int total_qualifiers = target_score > 0 ? k : 0;
    int  j = target_score > 0 ? k : 0 ;
    for (int i = j; i < n; i++){
            if(scores[i] >= target_score && scores[i] > 0) {
                total_qualifiers++;
            }
            else break;
    }
    printf("%d",total_qualifiers);

    return 0;
}