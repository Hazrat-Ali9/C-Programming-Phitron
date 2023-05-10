#include<stdio.h>
int main(){

 int a;
 scanf("%d",&a);
  if(a>=0 && a<=32)
    printf("F");

  if(a>32 && a<=39)
    printf("D");
  if(a>39 && a<=49)
    printf("C");
  if(a>49 && a<=59)
    printf("B");

  if(a>59 && a<=69)
    printf("A-");
  if(a>69 && a<=79)
    printf("A");
  if(a>79 && a<=100)
    printf("A+");
 

  return 0;

}
