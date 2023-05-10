#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int moves=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]<arr[i-1])
        {
        moves+=arr[i-1] - arr[i];

        }

    }
    printf("%d",moves);
    
}