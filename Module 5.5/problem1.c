#include<stdio.h>
int main()
{
    long long n;
    int k,i;
    scanf("%lld",&n);
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        int last_digit=n%10;
        if(last_digit !=0)
         n--;

       else
          n =n/10;  
    }
    printf("%d",n);

    return 0;
}