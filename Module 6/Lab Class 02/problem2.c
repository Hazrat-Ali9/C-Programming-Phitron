#include<stdio.h>
int main(){
    int n,step;
    
    scanf("%d",&n);
  //solution 1
    /*if(n%5==0){
        step = n /5;
    }
    else  {
        step = (n/5) + 1 ;
    }
    */
   //solution 2
    step = (n/5) + (n%5!=0);
    printf("%d\n",step);

    return 0;

}