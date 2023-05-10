#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1 ){
         printf("0 ");
        return 0;
    }
    
    if(n==2){
        printf("0 1");
        return 0;
    }

     
     int fib,n1 =0,n2=1;
     for(int i=3;i<=n;i++){
        fib = n1 + n2;
         printf("%d ",fib);
         n1 = n2 ;
         n2 = fib;
     }
     return 0;

}