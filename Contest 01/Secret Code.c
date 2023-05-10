#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--){
        int i;
        long long n;
        scanf("%lld",&n);
        if(n==1){
           printf("No\n");
          continue;
      }
          
        int f=0;
        for(i=2;i<=sqrt(n);i++){
           
            if(n%i==0){
                printf("No\n");
                f=1;
                 break;
            }
            
        }
        if(f==0)
         printf("Yes\n");

    }
    
       return 0; 
    
}