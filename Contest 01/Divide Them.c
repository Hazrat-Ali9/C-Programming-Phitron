#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int ary[n], ary2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    scanf("%d", &k);
    if (k == 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ary[i]);
        }
    }
    else
    {
        for (int i = k ; i < n; i++)
        {
            printf("%d ", ary[i]);
        }
        for (int i = 0; i < k; i++)
        {
            printf("%d ", ary[i]);
        }
    }

    return 0;
}