#include <stdio.h>

int MAX(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int num;
    int arr[10001];
    int D[10001];

    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
        scanf("%d", &arr[i]);

    D[1] = arr[1];
    D[2] = arr[1] + arr[2];
    for (int i = 3; i <= num; i++)
        D[i] = MAX(D[i - 2] + arr[i], MAX(D[i - 3] + arr[i - 1] + arr[i], D[i - 1]));
    printf("%d", D[num]);

    return 0;
}