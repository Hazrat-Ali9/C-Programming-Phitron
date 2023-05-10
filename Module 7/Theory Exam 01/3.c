#include<stdio.h>
int main()
{
    long long  num,count =0,rem;
    scanf("%lld",&num);
    while(num !=0){
        rem=num%10;
        count++;
        num /=10;

    }
    printf("%lld digits",count);

    return 0;
}