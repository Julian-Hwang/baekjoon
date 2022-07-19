#include<stdio.h>

int n;
int t[15], p[15];
int profit, max = 0;

void consult(int index, int profit) {
    if (index > n) {
        return;
    }
    if (profit > max) {
        max = profit;
    }
    if (index == n) {
        return;
    }

    consult(index + t[index], profit + p[index]);
    consult(index + 1, profit);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &t[i], &p[i]);
    }
    consult(0, 0);

    printf("%d", max);

    return 0;
}