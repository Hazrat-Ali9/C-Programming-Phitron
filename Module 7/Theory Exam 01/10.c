#include<stdio.h>
#include<math.h>

int main()
{
   int i,n,f=0;
   scanf("%d",&n);
    
     for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
           {
            f =1;
            break;
           }
    }
    if(f==0)
     printf("prime");
     else
       printf("Composite");

    return 0;
}