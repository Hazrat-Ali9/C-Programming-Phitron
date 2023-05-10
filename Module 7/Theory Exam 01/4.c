#include<stdio.h>
int main()
{
    long long  num,sum =0,rem;
    scanf("%lld",&num);
    while(num !=0){
        rem=num%10;
        sum +=rem;
        num /=10;

    }
    printf("%lld",sum);

    return 0;
}