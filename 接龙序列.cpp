//#include<iostream>
//using namespace std;
//#define INF 0x3f3f3f3f
//const int N = 1e5;
//int a[N];
//int n;
//int ans;
//
//int get_first(int x) {
//	int num = 0;
//	while (x) {
//		num = x % 10; 
//		x /= 10; 
//	}
//	return num;
//}
//int get_last(int x)
//{
//	return x%10;
//}
//
////u当前考虑到了第几个数字
////sum 表示当前序列中有几个数字
//// last 当前方案的最后一个数字
//void bfs(int u,int sum,int last) {
//	if (u >= n)
//	{
//		ans = max(ans, sum);
//		return;
//	}
//		if (last== -1||get_last(last) == get_first(a[u]))
//			bfs(u + 1, sum + 1, a[u]);
//		bfs(u + 1, sum, last);
//	 
//}
//void solve() {
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	bfs(0, 0, -1);
//	cout << n - ans << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int t = 1;
//	while (t--);
//	solve();
//	return 0;
//}