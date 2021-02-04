/* From a given vertex in a weighted connected graph,
 find shortest paths to other vertices using Dijkstra’s algorithm.*/

#include<bits/stdc++.h>
#define infinity 999
using namespace std;
void dij(int n,int v,int cost[10][10],int dist[100])
{
int i,u,count,w,flag[10],min;
for(i=1;i<=n;i++)
flag[i]=0,dist[i]=cost[v][i];
count=2;
while(count<=n)
{
min=99;
for(w=1;w<=n;w++)
if(dist[w]<min && !flag[w])
min=dist[w],u=w;
flag[u]=1;
count++;
for(w=1;w<=n;w++)
if((dist[u]+cost[u][w]<dist[w]) && !flag[w])
dist[w]=dist[u]+cost[u][w];
}
}
int main()
{
    int n,v,i,j,cost[10][10],dist[10];
    cout<<"\n Enter the number of nodes:";
    cin>>n;
    cout<<"\n Enter the cost matrix:\n";

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            {
                cin>>cost[i][j];
                if(cost[i][j]==0)
                    cost[i][j]=infinity;
            }
        cout<<"\n Enter the source matrix:";
        cin>>v;
    dij(n,v,cost,dist);
    cout<<"\n Shortest path:\n";
    for(i=1;i<=n;i++)
    if(i!=v)
    cout<<v<<" -> "<<i<<" ,cost= "<<dist[i]<<endl;
    return 0;
}