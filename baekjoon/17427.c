#include <stdio.h>

int main()
{
    int n;
    long sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (n / i) * i;
    }
    printf("%ld\n", sum);
    return 0;
}  