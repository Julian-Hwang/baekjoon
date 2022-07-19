#include <stdio.h>

int main()
{
    int num;
    long result = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num; i *= 10) {
        result += num - i + 1;
    }
    printf("%ld", result);
}