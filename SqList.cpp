#include<iostream>
using namespace std;
#define maxsize 100
typedef struct {//顺序表
	int* data;
	int length;
}SqList;
bool InitList(SqList &L) {//顺序表初始化
	L.data = new int[maxsize];
	L.length = 0;
	return true;
}
bool InsertList(SqList& L, int i,int e) {//顺序表第i个位置插入e
	if (i<1 || i>L.length+1) return false;
	if (L.length==maxsize) return false;//判断是否已满
	for (int j = L.length - 1; j >= i-1; j--) {  
		L.data[j + 1] = L.data[j];  
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}
bool DeleteList(SqList& L, int i) {//顺序表删除第i个位置的元素
	if (i<0 || i>L.length) return false;
	for (int j = i; j < L.length; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

typedef struct LNode {//链表 结点结构定义
	int data;
	struct LNode* next;
}LNode, *LinkList;
bool LinkListInit(LinkList& L) {//带头结点单链表初始化
	L = new LNode;
	L->next = NULL;
	return true;
}
bool InsertLinklist(LinkList & L, int i, int e) {//第i个位置插入 元素e
	if (i < 0) return false;
	LNode * q=searchNode(L, i - 1);
	InsertNextNode(q, e);
}
LNode * searchNode(LinkList& L, int i)//查找第 i个结点 返回第i个结点
{
	LNode* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i )
	{
		p = p->next;
		j++;
	}
	return p;
}
bool InsertNextNode(LNode* p, int e) {//p结点后插 e
	if (p == NULL) return false;
	LNode* s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

signed main() {
	
	LinkList L;
	LinkList L1;
	LinkListInit(L1);
	LinkListInit(L);
	LNode* v;
	v = L1;
	LNode* p = L1->next;
	/*while (v->next != NULL)
	{
		int x = v->next->data;
		v = v->next;
		LNode* s = new LNode;
		s->data = x;
		s->next = L->next;
		L->next = s;
	}
	LNode* q = L->next;
	for (int i = 0; i <= 5; i++)
	{
		cout << q->data<<endl;
		q = q->next;
	}*/
}