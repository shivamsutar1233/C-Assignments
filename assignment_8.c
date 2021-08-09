//Author - SHIVAM ASHOK SUTAR
//program for traversing the graph using dfs and bfs...
#include<stdio.h>
int tech_a();
int tech_b();
void dfs(int);
void bfs(int);	
int G[10][10],visited[10],n;
int a[20][20],q[20],visited1[20],n,i,j,f=0,r=-1;
int main()
{
	int n;
	while(1) {
	printf("\n1.DFS traversing\n2.BFS traversing\nHow will you continue:");
	scanf("%d",&n);
	switch(n) 
	{
		case 1:
		      tech_a();
		      break;
		case 2:
		       tech_b();
		       break;
		default:
		       printf("\nthank you for interacting with my program...Have a nice day...");
		       break;
	}}
}
int tech_a()
{
	int i,j;
	printf("\nenter no of vertices:");
	scanf("%d",&n);
	printf("\nenter adjecency matrix of graph:");
	for(i=0;i<n;i++) 
	{
		for(j=0;j<n;j++) 
		{
			scanf("%d",&G[i][j]);
		}
	}
	for(i=0;i<n;i++) 
	{
		visited[i]=0;
	}
	dfs(0);
	
}
void dfs(int i)
{
	int j;
	printf("\n%d",i);
	visited[i]=1;
	for(j=0;j<n;j++)
   {
   	if(!visited[j]&&G[i][j]==1)
   	{
   		dfs(j);
   	}
   }
}
int tech_b() {
	int v;
	printf("\n Enter the number of vertices:");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		q[i]=0;
		visited1[i]=0;
	}
	printf("\n Enter graph data in matrix form:\n");
	for (i=1;i<=n;i++)
	  for (j=1;j<=n;j++)
	   scanf("%d",&a[i][j]);
	printf("\n Enter the starting vertex:");
	scanf("%d",&v);
	bfs(v);
	printf("\n The node which are reachable are:\n");
	for (i=1;i<=n;i++)
	  if(visited1[i])
	   printf("%d\t",i); else
	   printf("\n Bfs is not possible");

}


void bfs(int v) {
	for (i=1;i<=n;i++)
	  if(a[v][i] && !visited1[i])
	   q[++r]=i;
	if(f<=r) {
		visited1[q[f]]=1;
		bfs(q[f++]);
	}
}
