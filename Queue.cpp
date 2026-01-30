//#include<iostream>
//using namespace std;
//typedef int Elemtype;
//#define Maxsize 100
//typedef struct {
//	Elemtype* base;
//	Elemtype front;
//	Elemtype rear;
//}SqQueue;
//void InitSqQueue(SqQueue &Q){   //初始化
//	Q.base = new Elemtype[Maxsize];
//	Q.front = Q.rear = 0;
//}
//bool EnSqQueue(SqQueue &Q,Elemtype e) { //插入
//	if ((Q.rear + 1) % Maxsize == Q.front) return false;
//	Q.base[Q.rear] = e;
//	Q.rear = (Q.rear + 1) % Maxsize;
//	return true;
//}
//bool DeSqQueue(SqQueue &Q,Elemtype &e) {//删除
//	if (Q.front == Q.rear) return false;
//	e = Q.base[Q.front];
//	Q.front = (Q.front + 1) % Maxsize;
//	return true;
//}
//int QueueLength(SqQueue Q) {   //队列长度
//	return (Q.rear - Q.front + Maxsize) % Maxsize;
//}
//
////链队列
//typedef struct QNode{
//	Elemtype data;
//	struct QNode* next;
//}QNode,*QueuePtr;
//typedef struct {
//	QueuePtr front;
//	QueuePtr rear;
//}LinkQueue;
//bool InitLinkQueue(LinkQueue& Q) {
//	Q.rear = Q.front = new QNode;
//	Q.front->next = NULL;
//	return true;
//}
//bool EnQueue(LinkQueue& Q,Elemtype e) {
//	QNode* p = new QNode;
//	p->data = e;
//	Q.rear->next = p;
//	Q.rear = p;
//	return true;
//}
//bool DeQueue(LinkQueue& Q, Elemtype& e) {
//	QNode* p = new QNode;
//	p = Q.front->next;
//	e = p->data;
//	Q.front->next = p->next;
//	if (p == Q.rear) {
//		Q.rear = Q.front;
//	}
//	delete p;
//	return true;
//}
//signed main() {
//	LinkQueue Q;
//	InitLinkQueue(Q);
//	
//}