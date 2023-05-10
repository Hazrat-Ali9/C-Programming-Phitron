#include<stdio.h>
int main()
{
    int n1,n2, a,b,temp;

    scanf("%d%d",&n1,&n2);
    a =n1;
    b=n2;
    while (b !=0)
    {
       temp = a%b;
       a =  b;
       b = temp;


    }
    int gcd=a;
    int lcm = (n1*n2)/gcd;
    printf("The GCD of %d and %d is %d.",n1,n2,lcm);

    return 0;
}