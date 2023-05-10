#include<stdio.h>
int main(){
    int n,weight,sum=0;
    printf("Enter the number of passenger :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
          scanf("%d",&weight);

          sum  += weight;
    }
    printf("Total sum of weight is = %d",sum);
}