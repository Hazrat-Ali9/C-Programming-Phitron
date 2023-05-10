#include<stdio.h>
int main()
{
    int n,k,i,nextRoom=101,nextFloor=2,ans=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=(n*k);i++){
        
        ans += nextRoom;
        nextRoom++;
        
        if(i%k==0){

            nextRoom = (100*nextFloor)+1;
            nextFloor++;
        }

    }
    printf("%d",ans);
}