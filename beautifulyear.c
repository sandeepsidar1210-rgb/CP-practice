#include <stdio.h>
int main()
{
    int y;
    scanf("%d", &y);

    while (1)
    {
        y++;

        int digit[4];
        digit[0] = y % 10;
        digit[1] = (y / 10) % 10;
        digit[2] = ((y / 10) / 10) % 10;
        digit[3] = (((y / 10) / 10) / 10) % 10;

        int flag = 1;

        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {

                if (digit[i] == digit[j])
                {
                    flag = 0;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }

        if (flag == 1)
        {
            printf("%d", y);
            break;
        }
    }
    return 0;
}