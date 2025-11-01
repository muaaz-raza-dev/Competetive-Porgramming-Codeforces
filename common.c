// @author Maaz
// @desc  Simple and reliable C boilerplate for competitive programming

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ll long long
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define YES printf("YES\n")
#define NO printf("NO\n")

int main(void) {
    int t = 1;                 // number of test cases
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        rep(i, n) scanf("%d", &arr[i]);

        long long sum = 0;
        rep(i, n) sum += arr[i];

        printf("%lld\n", sum);
    }

    return 0;
}

/*
char str[105];
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
*/

/*
int n, m;
scanf("%d %d", &n, &m);
int grid[n][m];
rep(i, n) rep(j, m) scanf("%d", &grid[i][j]);
*/
