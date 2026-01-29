#include<iostream>
#include<stack>
using namespace std;
stack<int> a;
//int main() 
//{	
//	char c;
//	int l,r,ans=0,tmp;
//	cin >> c;
//	while (c != '@')
//	{
//		l = 0;
//		if(c>='0'&&c<='9')
//			while (c >= '0' && c <= '9')
//			{
//				tmp = c - '0';
//				l = tmp * 10 + tmp;
//				cin >> c;
//			}
//		if (c == '.') a.push(l);
//		else
//		{
//			r = a.top();
//			a.pop();
//			l = a.top();
//			a.pop();
//			if (c == '+')a.push(r + l);
//			if (c == '-')a.push(r - l);
//			if (c == '*')a.push(r * l);
//			if (c == '/')a.push(r / l);
//		}
//	}
//	cout << a.top();
//	return 0;
//}
