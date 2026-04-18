#include <stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d", &n);

    int count[5] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        count[x]++;
    }

    int taxis = 0;

    // group of 4s
    taxis += count[4];

    // group of 3s
    taxis = taxis + count[3];
    if (count[1] > count[3])
    {
        count[1] = count[1] - count[3];
    }
    else
        count[1] = 0;

    // group of 2s
    taxis = taxis + count[2] / 2;
    if (count[2] % 2)
    {
        taxis++;

        if (count[1] >= 2)
        {
            count[1] = count[1] - 2;
        }
        else
        {
            count[1] = 0;
        }
    }
    // Remaining groups of 1
    taxis += (count[1] + 3) / 4;

    printf("%d\n", taxis);

    return 0;
}