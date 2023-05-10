#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int arr[5];
       for(int i=1;i<=4;i++){
         scanf("%d",&arr[i]);

       }
       int sum =0;
       for(int i=2;i<=4;i++){
        sum +=arr[i];
       }
      int result = arr[1] - sum;
      printf("%d\n",result);

    }
    
    return 0;

}