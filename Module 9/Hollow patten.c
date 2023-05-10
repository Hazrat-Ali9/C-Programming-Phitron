#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("$");
    }
    printf("\n");
    for(int j=0;j<=(n-2);j++){
         printf("$");
         for(int j=0;j<=(n-2);j++){
            printf(" ");
         }
          printf("$");
          printf("\n");

    }
     for(int k=0;k<=n;k++){
        printf("$");
    }

    return 0;
}