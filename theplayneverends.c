#include <stdio.h>

int main()
{

    int t;
    int k;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &k);
        if (k % 3 == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
