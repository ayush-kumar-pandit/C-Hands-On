#include <stdio.h>

#include <stdlib.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int n;
    int i, j, k;

    scanf("%d", &n);
    

    for (i = 1; i < 2 * n; i++) {
        for (j = 1; j < 2 * n; j++) {
            k = max(abs(n - i), abs(n - j)) + 1;
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
