#include<stdio.h>
int main()
{
    long long  n;
   // printf("Enter a number :");
    scanf("%lld",&n);
    while (n>1) {
      printf("%lld ",n);
     if(n%2==0){
       n= n/2;
     }
     else {
        n= 3*n +1;

     }

      
    }
    printf("%lld",n);
}

