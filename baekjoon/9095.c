#include <stdio.h>

int main(void)
{
    int T, n;
    int arr[11] = { 0 };

    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &n);
        arr[0] = arr[1] = 1;
        arr[2] = 2;
        arr[3] = 4;
        for (int i = 4; i < n + 1; i++) {
            arr[i] = ((arr[i - 1] + arr[i - 2] + arr[i - 3]));
        }
        printf("%d\n", arr[n]);
    }
}