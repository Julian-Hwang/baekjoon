#include <stdio.h>

int main(void)
{
    int n;
    long long D[90];
    scanf("%d", &n);

    D[0] = 0;
    D[1] = 1;
    D[2] = 1;

    for (int i = 3; i <= n; i++) {
        D[i] = D[i - 1] + D[i - 2];
    }
    printf("%lld\n", D[n]);

    return 0;
}