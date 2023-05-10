#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int even=0 ,odd=0,position;
     for(int i=1;i<=n;i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else
           odd++;
    }
    if(even == 1){
      for(int i=1;i<=n;i++){
      if(arr[i]%2==0){
        position = i;
        break;
      }
    
        }
       
    }
      else
        {
             for(int i=1;i<=n;i++){
                if(arr[i]%2==1){
                    position =i;
                    break;
                }
             }
       }
 
 
    printf("%d",position);
 
 
  return 0;
}