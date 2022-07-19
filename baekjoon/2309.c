#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[9];
    int sum = 0;
    int over = 0;
    int i, j;

    for (i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    over = sum - 100;

    int non1 = 0;
    int non2 = 0;
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 9; j++) {
            if ((arr[i] + arr[j]) == over) {
                non1 = i;
                non2 = j;
                break;
            }
        }
    }

    int tmp;
    int arr_r[7];
    int k = 0;
    for (i = 0; i < 9; i++) {
        if (i != non1 && i != non2) {
            arr_r[k] = arr[i];
            k++;
        }
    }

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 7; j++) {
            if (arr_r[i] > arr_r[j]) {
                tmp = arr_r[i];
                arr_r[i] = arr_r[j];
                arr_r[j] = tmp;
            }
        }
    }

    for (i = 0; i < 7; i++) {
        printf("%d\n", arr_r[i]);
    }
}