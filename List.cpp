//#include<iostream>
//using namespace std;
//#define MAXSIZE 100
//typedef struct SqList
//{
//	int* elem;
//	int length;
//	int Maxsize;
//}SqList;
//bool InitList(SqList& L) {
//	L.elem = new int[MAXSIZE];
//	L.length = 0;
//	L.Maxsize = MAXSIZE;
//	return true;
//}
//bool InsertList(SqList& L,int i,int e) { //线性表第i个位置 插入 e
//	if (i <= 0 || i > MAXSIZE) return false;
//	int k = 0;
//	for ( k = L.length ; k >= i ; k--) { 
//		L.elem[k] = L.elem[k-1];
//	}
//	L.elem[i - 1] = e;
//	L.length++;
//	return true;
//}
//bool DeleteList(SqList& L, int i, int& e) {  //删除线性表 位序为i的元素 返回删除值
//	if (i <= 0 || i > L.length) return false;
//	e = L.elem[i - 1];
//	for (int j = i; j <= L.length-1; j++) { 
//		L.elem[j - 1] = L.elem[j];
//	}
//	L.length--;
//	return true;
//}
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LNode,*LinkList;
//bool HeadInitLinkList(LinkList& L) {//头节点
//	L = new LNode;
//	L->next = NULL;
//	return true;
//}
//bool HeadInsertLinkList(LinkList& L,int e) {//带头结点 头插法
//	LNode* p = new LNode;
//	p->data = e;
//	p->next = L->next;
//	L->next = p;
//	return true;
//}
//bool HeadInsertNextLinkList(LinkList& L, LNode* p,int e) {// p结点后插入e
//	if (p == NULL) return false;
//	LNode* q = new LNode;
//	q->data = e;
//	q->next = p->next;
//	p->next = q;
//	return true;
//}
//LNode* SearchNode(LinkList& L, int i) {// 返回第i个结点的指针  
//	int j = 0;  //带头结点从头节点开始下标从0开始 不带头结点 从第一个元素开始 下标从1开始
//	LNode* p = L;
//	while (p != NULL && j < i ) {
//		p = p->next;
//		j++;
//	}
//	if (p == NULL) return NULL;
//	return p;
//}
//bool HeadLinkListInsert(LinkList & L, int i, int e) { //第i个位置插入e
//	if (i < 1) return false;
//	LNode *p=SearchNode(L, i-1);  // L中 找到第i-1个结点
//	if (p == NULL) return false;
//	LNode* q = new LNode;
//	q->data = e;
//	q->next = p->next;
//	p->next = q;
//	return true;
//}
//bool HeadDeleteLinkList(LinkList & L, int i, int& e) { //删除第i个结点 带回删除的值
//	if (i < 1)return false;
//	LNode* p = SearchNode(L, i - 1);		//L 中找到第i-1个结点指针
//	if (p == NULL) return false;
//	if (p->next == NULL) return false;
//	LNode* q = p->next;
//	e = q->data;
//	p->next = q->next;
//	delete q;
//	return true;
//}
//	//不带头结点
//bool InitLinkList(LinkList& L) {
//	L = NULL;
//	return true;
//}
//bool InsertLinkList(LinkList& L,int e) {//不带头节点 头插法
//	LNode* p = new LNode;
//	p->data = e;
//	if (L == NULL) {
//		p->next = NULL; 
//		L = p;
//	}
//	else {
//		p->next = L;
//		L = p;
//	}
//	return true;
//}
//bool InsertLinkList(LinkList& L,int i,int e) {// 无头结点 第i个结点后插入一元素
//	if (i < 1) return false;
//	if (i == 1) {			//单独判断第一个位置的插入
//		LNode* q = new LNode;
//		q->data = e;
//		q->next = L;
//		L = q;
//		return true;
//	}
//	LNode* q = SearchNode(L, i - 1);
//	if (q == NULL) return false;
//	LNode *s = new LNode;
//	s->data = e;
//	s->next = q->next;
//	q->next = s;
//	return true;
//}
//bool DeleteLinkList(LinkList& L,int i,int &e) {//删除第i个结点
//	if (i < 1) return false;
//	if (i == 1) {			//单独判断第一个
//		LNode* p = L;
//		e = L->data;
//		L = p->next;
//		delete p;
//		return true;
//	}
//	LNode* p = SearchNode(L, i-2 );  //不带头节点 查找第i-1个结点 但是j从下标1开始
//	if (p == NULL) return false;
//	if (p->next == NULL) return false;
//	LNode* q = p->next;
//	e = q->data;
//	p->next = q->next;
//	delete q;
//	return true;
//}
//signed main() {
//	LinkList L;
//	InitLinkList(L);
//	for (int i = 0; i < 9; i++)
//	{
//		InsertLinkList(L, i);
//	}
//	LNode* p;
//	int e = 0;
//	cout << "删除前";
//	for ( p=L;p; p=p->next)
//	{
//		cout << p->data  << endl;
//	}
//	cout << "删除后";
//	DeleteLinkList(L, 5, e);
//	for (p = L; p; p = p->next)
//	{
//		cout << p->data << endl;
//	}
//	cout << e;
//}