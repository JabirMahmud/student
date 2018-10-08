#include<bits/stdc++.h>
using namespace std;
#define mx 100
int white=-1;
int gray=1;
int black=2;
int tm=0;
int color[mx];
vector<int>Graph[mx];
void DFS_visit(int u)
{
    if(color[u]!=white) return;
    color[u]=gray;
    printf("%d ",u);
    for(int i=0;i<Graph[u].size();i++)
    {
        DFS_visit(Graph[u][i]);
    }
    color[u]=black;
}

int main()
{
    int i,j,k,l,m,n,u,v,x;

    printf("Input node number: ");
    scanf("%d",&n);
    printf("Input edge number: ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&u,&v);
        Graph[u].push_back(v);
        Graph[v].push_back(u);
        color[u]=white;
        color[v]=white;
    }
    printf("Which node do u want to travarse from: ");
    scanf("%d",&x);
    DFS_visit(x);
    return 0;
}
/*
4
4
1 2
2 3
3 4
2 4

*/
