//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct ArcNode
//{
//	int adjvex;
//	int value;
//	struct ArcNode* nextarc;
//}ArcNode;
//
//typedef struct VNode
//{
//	int data;
//	ArcNode* firstarc;
//}VNode,AdjList[20];
//
//typedef struct
//{
//	AdjList vertices;
//	int vexnum, arcnum;
//}ALGraph;
//
//void CreatALGraph(ALGraph* G)
//{
//	int i, j, k;
//	G->vexnum = 9;
//	G->arcnum = 13;
//	for (i = 0; i < 9; i++)
//		G->vertices[i].data = i+1;
//
//	G->vertices[8].firstarc = NULL;
//
//	ArcNode* p1 = new ArcNode;
//	p1->adjvex = 2;
//	G->vertices[0].firstarc = p1;
//	ArcNode* p2 = new ArcNode;
//	p2->adjvex = 3;
//	p1->nextarc = p2;
//	ArcNode* p3 = new ArcNode;
//	p3->adjvex = 5;
//	p2->nextarc = p3;
//	p3->nextarc = NULL;
//
//
//	ArcNode* p4 = new ArcNode;
//	p4->adjvex = 3;
//	G->vertices[1].firstarc = p4;
//	ArcNode* p5 = new ArcNode;
//	p5->adjvex = 4;
//	p4->nextarc = p5;
//	p5->nextarc = NULL;
//
//	ArcNode* p6 = new ArcNode;
//	p6->adjvex = 5;
//	G->vertices[2].firstarc = p6;
//	ArcNode* p7 = new ArcNode;
//	p7->adjvex = 6;
//	p6->nextarc = p7;
//	p7->nextarc = NULL;
//
//	ArcNode* p8 = new ArcNode;
//	p8->adjvex = 6;
//	G->vertices[3].firstarc = p8;
//	p8->nextarc = NULL;
//
//	ArcNode* p9 = new ArcNode;
//	p9->adjvex = 7;
//	G->vertices[4].firstarc = p9;
//	p9->nextarc = NULL;
//
//	ArcNode* p10 = new ArcNode;
//	p10->adjvex = 7;
//	G->vertices[5].firstarc = p10;
//	ArcNode* p11 = new ArcNode;
//	p11->adjvex = 8;
//	p10->nextarc = p11;
//	p11->nextarc = NULL;
//
//	ArcNode* p12 = new ArcNode;
//	p12->adjvex = 9;
//	G->vertices[6].firstarc = p12;
//	p12->nextarc = NULL;
//
//	ArcNode* p13 = new ArcNode;
//	p13->adjvex = 9;
//	G->vertices[7].firstarc = p13;
//	p13->nextarc = NULL;
//
//	p1->value = 2;
//	p2->value = 5;
//	p3->value = 5;
//	p4->value = 2;
//	p5->value = 3;
//	p6->value = 1;
//	p7->value = 3;
//	p8->value = 2;
//	p9->value = 6;
//	p10->value = 3;
//	p11->value = 4;
//	p12->value = 4;
//	p13->value = 2;
//}
//
//
//
////int visited[13];
////int num = 0;
////int paths[10][10];
//
////void FindPath(ALGraph G,int i,int j,int path[],int d)
////{
////	int w,n;
////	ArcNode* p;
////
////	d++;
////	path[d] = i;
////	visited[i] = 1;
////	p = G.vertices[i].firstarc;
////	if (i == j)
////	{
////		for (n = 0; n < d; n++)
////		{
////			paths[num][n] = G.vertices[path[n]].data;
////		}
////		paths[num][i] = '\0';
////		num++;
////	}
////	while (p!=NULL)
////	{
////		w = p->adjvex;
////		if (visited[w] == 0)
////		{
////			FindPath(G, w-1, j, path, d);
////		}
////		p = p->nextarc;
////	}
////	visited[i] = 0;
////	path[d] = 0;
////}
//
////int main(void)
////{
////	ALGraph  G;
////	int i, j,m=0;
////	int a[3] = { 1,2,3 };
////	int path[13] = {-1};
////	scanf("%d %d", &i, &j);
////	CreatALGraph(&G);
////	FindPath(G, i, j, path, -1);
////	for (i = num-1; i >= 0;m++, i--)
////	{
////		for (int n = 0; n < a[m]; n++)
////			printf("%d ", paths[i][n]-1);
////		printf("%d\n", j);
////	}
////	return 0;
////}
//
//
////
////if (num)
////printf("T" );
////else
////printf("F");