#include<stdio.h>
int main(){
    long long  n,k,countodd,num,p;
    scanf("%lld%lld",&n,&k);
    if(n%2==0){
        countodd = n / 2;
    }
    else {
        countodd = (n/2) +1 ;
    }
     if(k <= countodd){
     num =(2*k)  -1 ;
     }
     else {
      p = k-countodd;
      num = 2*p;
     }
     printf("%lld",num);

     return 0;
}