#include <stdio.h>

int main()
{
    int N = 9;
    int val = 1;
    int diff = 0;

    for (int i = 1; i <= N; i++)
    {
        printf("%d  ", val);

        if (i == 1)
        {
            diff = 0;
        }
        else if (i == 2)
        {
            diff = 2;
        }
        else
        {
            diff++;
        }

        val += diff;
    }
    printf("\n");

    return 0;
}