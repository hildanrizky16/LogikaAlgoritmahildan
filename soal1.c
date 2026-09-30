#include <stdio.h>

int main()
{
    int N;
    printf("MASUKKAN N (MAKS = 20) : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * (N - i) + 1; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}