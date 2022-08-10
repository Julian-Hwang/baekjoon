#include <stdio.h>

int main()
{
    int i, x;
    int s = 0;

    char arr[10];
    scanf("%d", &i);

    while (i--) {
        scanf("%s", arr);

        if (strcmp(arr, "all") == 0) {
            s = (1 << 20) - 1;
            continue;
        }
        else if (strcmp(arr, "empty") == 0) {
            s = 0;
            continue;
        }

        scanf("%d", &x);

        int j = 1 << (x - 1);
        if (strcmp(arr, "add") == 0) {
            s |= j;
        }
        else if (strcmp(arr, "remove") == 0) {
            s &= ~j;
        }
        else if (strcmp(arr, "check") == 0) {
            printf("%d\n", (s & j) > 0);
        }
        else if (strcmp(arr, "toggle") == 0) {
            s ^= j;
        }
    }
    return 0;
}