#include<stdio.h>
int main(){
  int n;
  float sum=0.0 ,avg,mark;
  scanf("%d",&n);
  for(int i=1;i<=n;i++ ){
    printf("Enter marks of %dth student :",i);
    for(int j=0;j<3;j++){
        scanf("%f",&mark);
        sum +=mark;
    }
    avg = sum/3;
    printf("%f\n",avg);

  }
    return 0;
}