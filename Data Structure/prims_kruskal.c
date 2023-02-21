#include<stdio.h>
int main(){
int vertex,i,j,cost[20][20],visited[20]={0},e_no=1,min,mincost=0,a,b;
printf("\n Enter the Number of Vertex:");
scanf("%d",&vertex);

printf("\nenter the adjacency matrix:\n");
for(i=1;i<=vertex;i++){
    for(j=1;j<=vertex;j++){
    scanf("%d",&cost[i][j]);
    if(cost[i][j]==0)
        cost[i][j]=1000;
   }
}
visited[1]=1;
while(e_no<vertex){
      min=1000;
    for(i=1;i<vertex;i++){
        for(j=1;j<vertex;j++){
            if(cost[i][j]<min){
            if(visited[i]!=0){
                  min=cost[i][j];
                  a=i;
                  b=j;
                }
            }
        }
    }
    if(visited[b]==0){
        mincost=mincost+min;
        printf("\n%d to %d cost : %d\n",a,b,mincost);
        e_no++;

    }
    visited[b]=1;
    cost[a][b]=cost[b][a]=1000;
}
printf("\nminimumcost:%d",mincost);
}
