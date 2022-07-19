#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, j;
    scanf("%d", &num);
    int* arr = (int*)malloc(sizeof(int) * num);

    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    printf("%d\n", arr[0] * arr[num - 1]);
    return 0;
}