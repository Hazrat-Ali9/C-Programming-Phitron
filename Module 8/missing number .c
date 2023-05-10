#include<stdio.h>
int main(){
    int n,x;
    int arr[20000];
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        arr[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
        printf("Mising Number is : %d",i);
        break;
        }
        
    }
    return 0;
}
