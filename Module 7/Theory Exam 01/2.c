#include<stdio.h>
int main()
{
    
     int a, b, c, d, grater, smaller;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        grater = a;
        if (b < c && b < d)
            smaller = b;
        else if (c < b && c < d)
            smaller = c;
        else
            smaller = d;
    }
    else if ((b > a && b > c && b > d))
    {
        grater = b;
        if (a < c && a < d)
            smaller = a;
        else if (c < a && c < d)
            smaller = c;
        else
            smaller = d;
    }

    else if ((c > a && c > b && c > d))
    {
        grater = c;
        if (b < a && b < d)
            smaller = b;
        else if (a < b && a < d)
            smaller = a;
        else
            smaller = d;
    }

    else if ((d > a && d > b && d > c))
    {
        grater = d;
        if (a < b && a < c)
            smaller = a;
        else if (b < a && b < c)
            smaller = b;
        else
            smaller = c;
    }

    printf("Largest = %d\n",grater );
    printf("Smallest = %d\n",smaller );

    return 0;
}