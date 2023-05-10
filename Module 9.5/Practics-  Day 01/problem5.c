#include<stdio.h>
int main()
 {
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
      
     for(int j=0;j<n;j++){

        if(j==i)
        continue;

        if((arr[i]+arr[j])==target)
        count++;
    }   
    }
    if(count == 0)
       printf("NO");
     else
       printf("YES");
    
     
    return 0;
}