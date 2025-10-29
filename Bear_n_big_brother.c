#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b;
    scanf("%f %f", &a, &b);
    float div_result = log(a / b) / log(2.0 / 3.0);
    int n = (int)ceil(div_result) + (ceil(div_result)-div_result > 0.001?0:1) ;
    printf("%d", n);

    return 0;
}
