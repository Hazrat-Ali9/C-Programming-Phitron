#include <stdio.h>
int main() {

  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  
 if(a!=0 && b!=0 && c!=0 && a==b && b==c && c==a)
    printf("Yes");
    else
     printf("No");
       
    return 0;
}

