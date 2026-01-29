#include<iostream>
using namespace std;
typedef struct DNode{
	int data;
	struct DNode* prior, * next;
}DNode,*DLinkList;

bool InitDLinkList(DLinkList& L) {
	L = new DNode;
	L->next = NULL;
	L->prior = NULL;
	return true;
}
bool Empty(DLinkList L) {
	if (L->next == NULL) return true;
	else return false;
}
bool InsertNextDNode(DNode * p,DNode * s) {// 双链表 p结点后插入s结点
	if (p == NULL || s == NULL) return false;
	s->next = p->next;
	if (p->next != NULL) p->next->prior = s;
	p->next = s;
	s->prior = p;
	return true;
}
bool DeleteNextDNoed(DNode* p) { //双链表删除p结点后一结点
	if (p == NULL) return false;
	DNode* q = p->next;
	if (q == NULL) return false;//p没有后继结点
	p->next = q->next;
	if (q->next != NULL) q->next->prior = p; //后继结点不为空 修改后继节点前驱指针
	delete q;
	return true;
}
signed main() {
	DLinkList L;
	InitDLinkList(L);
}