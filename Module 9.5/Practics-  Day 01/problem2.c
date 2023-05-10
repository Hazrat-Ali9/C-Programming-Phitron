#include<stdio.h>
int main()
 {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,a,v,j;
      scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d%d",&a,&v);
     for( j=0;j<n;j++){
        if(a == j){
            arr[j] += v;
            break;
        }
    }
      
   }
     for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }

    return 0;
}