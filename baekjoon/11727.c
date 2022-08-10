#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int D[1010] = { 0, };

    D[0] = 1;
    D[1] = 1;

    for (int i = 2; i <= n; i++) {
        D[i] = (D[i - 1] + D[i - 2] * 2) % 10007;
    }
    printf("%d\n", D[n] % 10007);
    return 0;
}