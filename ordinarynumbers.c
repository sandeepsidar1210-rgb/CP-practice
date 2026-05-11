#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int count = 0;

      for(int digit =1; digit <=9; digit++){

        long long num =0;
        while(num <= n){
            num = num * 10 + digit;
             if(num <= n)
                {
                    count++;
                }
        }
      }
        printf("%d\n", count);
    }

    return 0;
}