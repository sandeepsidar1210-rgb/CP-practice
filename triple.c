#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int freq[200001] = {0};

        int ans = -1;

        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);

            freq[x]++;

            if(freq[x] >= 3 && ans == -1)
            {
                ans = x;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}