#include<stdio.h>
int main(){
    int a,b,diff;
    scanf("%d%d",&a,&b);
   if(a>b){
    diff = a-b;

   }
   else {
   diff = b-a;
   }
   printf("%d",diff);

   return 0;
}
