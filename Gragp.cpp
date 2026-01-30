//#include<iostream>
//using namespace std;
//#define MAXVEX 100
//typedef char VertexType;
////边表结点
//typedef struct EdgeNode{
//	int adjvex;
//	struct EdgeNode* next;//指向下一条边的指针
//}EdgeNode;
////顶点表结点
//typedef struct VNode {	//顶点结点
//	VertexType data;			//顶点信息
//	EdgeNode* firstedge;	//指向第一个依附该顶点的边的指针
//}VNode,AdjList[MAXVEX];
//typedef struct {
//	AdjList adjlist;//邻接表
//	int vexnum, arcnum;//顶点数 边数
//}ALGraph;
//void CreatGraph(ALGraph &G) {
//	int i, j;
//	cin >> G.arcnum >> G.vexnum;
//	for (i = 0; i < G.arcnum; i++)
//	{
//		cin >> G.adjlist[i].data;
//		G.adjlist->firstedge = NULL;
//	}
//	for (int k = 0; i < G.vexnum; k++)
//	{
//		int v1, v2;
//		cin >> v1 >> v2;
//		i = Located(G, v1);
//		j = Located(G, v2);
//		EdgeNode* p1 = new EdgeNode;
//		p1->adjvex = i;
//		p1->next = G.adjlist[i].firstedge;  // 头插法 插入边结点
//		G.adjlist[i].firstedge = p1;
//		EdgeNode* p2 = new EdgeNode;		// 无向图 两条边
//		p2->adjvex = j; 
//		p2->next = G.adjlist[j].firstedge;
//		G.adjlist[j].firstedge = p2;
//	}
//	
//}
//int Located(ALGraph G,int i) {
//
//}
//
////邻接矩阵
//#define MaxINT 0x3f3f3f
//#define MVNum 100
//typedef char verTexType;
//typedef int EdgeType;
//typedef struct {
//	VertexType vex[MVNum];
//	EdgeType Edge[MVNum][MVNum];
//	int vexnum, arcnum;
//}AMGraph;
//bool CreateUDN(AMGraph& G) {
//	cin >> G.vexnum >> G.arcnum;
//	int v1, v2, w,i,j;
//	for ( i = 0; i < G.vexnum; i++) {
//		cin >> G.vex[i];
//	}
//	for ( i = 0; i < G.vexnum; i++) {
//		for ( j = 0;j < G.vexnum; j++) {
//			G.Edge[i][j] = MaxINT;
//		}
//	}
//	for (int k = 0; k < G.arcnum; k++) {
//		cin >> v1 >> v2 >> w;
//		//i = Located(G, v1);
//		//j = Located(G, v2);
//		G.Edge[i][j] = w;
//		G.Edge[j][i] = G.Edge[i][j];
//	}
//	return true;
//}
//signed main() {
//
//}