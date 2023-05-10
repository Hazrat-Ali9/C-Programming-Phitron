#include<stdio.h>
int main(){
    int a ,b;
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("They are equal");
    else if (a>b)
    {
       printf("A is bigger ");
    }
    else if (b>a)
    {
       printf("B is bigger");

    }
    
    return 0;
}