#include <stdio.h>
int main()
{
    int n, t = 0, b = 0;
    scanf("%d", &n);
    int arr[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            t++;
            arr2[b] = arr[i];
            ++b;
        }
    }
    
    printf("%d\n", t);

    for (int i = 0; i < t; i++)
      {
          printf("%d ", arr2[i]);
      }

    return 0;
}