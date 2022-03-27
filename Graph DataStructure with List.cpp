#include<conio.h>
#include<stdio.h>
int main()
{
	struct ListNode{
		int VertexNo;
		struct ListNode *next;
	};
	struct graph{
		int V;
		int E;
		ListNode *Adj;
	};
	
	struct graph* adjListOfGraph()
	{
		int x,y,i;
		struct ListNode *t,*temp;
		struct graph *G;
		G=(struct graph*)malloc(sizeof(struct graph));
		printf("Enter the number of vertex and number of Edges ");
		scanf("%d %d",&G->V,&G->E);
		G->Adj=(struct ListNode*)malloc(G->V *sizeof(struct ListNode));
		for(i=0;i<G->V;i++)
		{
			G->Adj[i]=VertexNo=i;
			G->Adj[i]->next=G->Adj+i;
		}
		
		for(i=0;i<G->E;i++){
			printf("Enter Edge (source node and destination node)");
			scanf("%d %d",&x,&y);
			temp=(struct ListNode*)malloc(sizeof(struct ListNode));
			temp->VertexNo=y;
			temp->next=G->Adj[x];
			t=G->Adj[x];
			while(t->next!=G->Adj[x])
			t=t->next;
			t->next=temp;
		}
		return(G);
	}
}
