#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[101];

        int minus = 0;
        int plus = 0;

        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);

            if(arr[j] == -1)
            {
                minus++;
            }
            else
            {
                plus++;
            }
        }

        int multi = 1;
        int add = 0;

        for(int j = 0; j < n; j++)
        {
            multi = multi * arr[j];
            add = add + arr[j];
        }

        int ans = 0;

        while(add < 0)
        {
            add = add + 2;
            multi = multi * -1;
            ans++;
        }

        if(multi == -1)
        {
            ans++;
        }

        printf("%d\n", ans);
    }

    return 0;
}