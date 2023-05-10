#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxx =arr[0] ;
     for(int i =0 ;i<n;i++){
        if(maxx<arr[i]){
            maxx =  arr[i];
        }
     }
     for(int i=0;i<n;i++){
        printf("%d ",maxx-arr[i]);
     }

     return 0;
}