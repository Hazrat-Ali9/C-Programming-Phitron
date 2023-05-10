#include<stdio.h>
int main()
{
    int n,p,v,t;
    scanf("%d",&n);
    int solve=0;
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&p,&v,&t);
        if(p+v+t>=2)
          solve++;
 
}
   printf("%d",solve);
 
return 0;
 
}