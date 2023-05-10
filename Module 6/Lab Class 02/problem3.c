#include<stdio.h>
int main(){
    int n,h,w,ans=0;
    scanf("%d%d",&n,&h);
    for(int i =0;i<n;i++){
        scanf("%d",&w);
        if(w>h){
     ans += 2;
  }
  else
   ans ++;
 }
  printf("%d\n",ans);

return 0;
}