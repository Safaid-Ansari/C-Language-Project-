#include<conio.h>
#include<stdio.h>
int main()

{
	struct graph
	{
		int V;
		int E;
		int **Adj;
	};
	
	struct graph * AddMatrixofGraph(){
		int u,v,i;
		struct graph* G=(struct graph*)malloc(sizeof(struct graph));
		if(G){
			printf("Memory Error ");
			return;
		}
		printf("Enter Number of Nodes and number of Edges");
		scanf("%d%d",&G->V,&G->E);
		G->Adj=malloc(sizeof (int)*(G->V*G->V));
		for(u=0;u<G->V;u++)
		   for(v=0;v<G->V;v++)
		   G->Adj [u][v]=0;
		
		printf("Enter node numbers in a pair that connects an edges");
		for(i=0;i<G->E;i++){
			scanf("%d%d",&u,&v);
			G->Adj[u][v]=1;
			G->Adj[v][u]=1;
		}		
		return (G);
    }
}
