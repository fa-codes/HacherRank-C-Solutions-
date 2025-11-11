#include <stdio.h>

int main(void)
{
    int n , m;
    float n1 , m1;

    scanf("%d %d", &n, &m);
    scanf("%f %f", &n1, &m1);

    printf("%d %d\n", n + m, n - m);
    printf("%.1f %.1f\n", n1 + m1, n1 - m1);
}