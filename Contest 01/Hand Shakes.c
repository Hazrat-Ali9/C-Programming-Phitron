#include<stdio.h>
int main()
{
    long long  n,r=2;
    scanf("%lld",&n);
    //n factorial
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact *=i; 
    }
    //n-2 factorinal 
    long long  x= n-r;
    long long  f=1;
    for(int i=1;i<=x;i++){
        f *=i;
    }
    long long ans = (fact/f)/2;
    printf("%lld\n",ans);

    return 0;
}