//#include<iostream>
//using namespace std;
//#define MAXSIZE 10
//typedef struct {
//	int * base, *top;
//	int StackMaxSize;
//}Sqstack;
//bool InitStack(Sqstack &s) {
//	s.base = new int[MAXSIZE];
//	s.top = s.base;
//	s.StackMaxSize = MAXSIZE;
//	return true;
//}
//bool isEmpty(Sqstack s)
//{
//	if (s.top != s.base) return false;
//	return true;
//}
////top指针 指向下一个被插入的位置 即最后一个元素的后一个位置
//bool Spush(Sqstack& s,int e)
//{
//	*s.top = e;
//	s.top++;
//	return true;
//}
//bool  Spop(Sqstack& s, int& e)//返回栈顶删除元素
//{
//	s.top--;
//	e = *s.top;
//	return true;
//}
//
//typedef struct StackNode {
//	int data;
//	struct StackNode* next;
//}StackNode,*LinkStack;
//bool InitLinkstack(LinkStack& s)//带头结点链栈
//{
//	s = new StackNode;
//	s->next = NULL;
//	return true;
//}
//bool Lpush(LinkStack& s,int e) {//入栈
//	StackNode * p = new StackNode;
//	p->data = e;
//	p->next = s->next;
//	s->next = p;
//	return true;
//}
//bool  Lpop(LinkStack& s, int& e) {//删除栈顶元素 将值带回原函数
//	StackNode* p = new StackNode;
//	p = s->next;
//	e = p->data;
//	s->next = p->next;
//	delete p;
//	return true;
//}
//bool InitLinstactN(LinkStack& s) {//不带头结点
//	s = NULL;
//	return true;
//}
//bool Npush(LinkStack& s,int e){//不带头结点入栈
//	StackNode* p = new StackNode;
//	p->data = e;
//	p->next = s;
//	s = p;
//	return true;
//}
//bool Npop(LinkStack& s, int& e) {//不带头结点出栈
//	StackNode* p = new StackNode;
//	e = s->data;
//	p = s;
//	s = s->next;
//	delete p;
//	return true;
//}
//signed main() {
//	Sqstack s;
//	InitStack(s);
//}