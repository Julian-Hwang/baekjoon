#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001

int main()
{
    int arr[MAX];
    long sum[MAX];
    for (int i = 1; i < MAX; i++) {
        for (int j = 1; i * j < MAX; j++) {
            arr[i * j] += i;
        }
    }

    sum[1] = arr[1];
    for (int i = 2; i < MAX; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }

    int num;
    scanf("%d", &num);

    int n;
    for (int i = 0; i < num; i++) {
        scanf("%d", &n);
        printf("%ld\n", sum[n]);
    }
    return 0;
}