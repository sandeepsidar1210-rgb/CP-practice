#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    // int f = 0;

    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d",i);
            // arr[f] = 1;
            // f++;
        }

        else if (i % 2 != 0)
        { 
            printf("%d",i);
            // arr[f] = i;
            // f++;
        }

        else
        {
            continue;
        }
        
    }

    for (int j = 0; j <= n; j++)
    {
        if (j == 0)
        {
            // arr[f] = 0;
            // f++;
            continue;
        }
        else if (j == 1)
        {
            continue;
        }

        else if(j % 2 == 0)
        { 
            printf("%d",j);
            // arr[f] = j
            // f++;
        }
        else
        {
            continue;
        }
    }


    // for (int l=0;l<n;l++){
    //     printf("%d\t",arr[l]);
    // }

    printf("%d\t", arr[k - 1]);

    return 0;
}