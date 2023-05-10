#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int x = n;
    for(int i=n;i>=1;i--){
        for(int k=0;k<n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=x;j++){
            printf("%d ",j);
            
        }
        printf("\n");
        --x;
    }
    return 0;
}