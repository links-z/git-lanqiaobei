//#include<iostream>
//#include<queue>
//using namespace std;
//const int maxn = 1e5+10;
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int q[maxn], p[maxn];
//	int head=0, tail=-1;
//	int a[maxn];
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (head <= tail && p[head] < i - k + 1)     
//			head++;
//		while (head <= tail && a[p[tail]] >= a[i])
//			tail--;
//		p[++tail] = i;
//		if (i-k+1>=0)
//			cout << a[p[head]] << "  ";
//	}
//	cout << endl;
//	head = 0, tail = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (head <= tail && q[head] < i - k + 1)
//			head++;
//		while (head <= tail && a[q[tail]] <= a[i])
//			tail--;
//		q[++tail] = i;
//		if (i - k + 1 >= 0)
//			cout << a[q[head]] << "  ";
//	}
//	
//	return 0;
//}