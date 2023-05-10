#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, a, b,c;
        char d;
        scanf("%d%c", &x, &d);
        if (x >= 0 && x < 60)
        {
            a = 60 - x;
            b = 20;
            c = 20;
            printf("%d minutes\n", (a * 1) + (b * 2) + (c * 3));
        }
        else if (x >= 60 && x < 80)
        {
            a = 80 - x;
            b = 20;
            printf("%d minutes\n", (a * 2) + (b * 3));
        }
        else if (x >= 80 && x <= 100)
        {
            a = 100 - x;
            printf("%d minutes\n", (a * 3));
        }
    }

    return 0;
}