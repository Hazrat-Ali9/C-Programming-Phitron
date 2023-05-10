#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int qualifi=0;
    for(int i=1;i<=n;i++){
       if(arr[i]>=arr[k] && arr[i]>0)
       qualifi++;
    }
 printf("%d\n",qualifi);
 
 return 0;
 
}