//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define int long long
//#define endl "\n"
//#define INF 0x3f3f3f3f
//const int N = 100 ;
//double a[N];
//double sum[N];
//int ans = INF;
//
//int n, m;//n瓜的数量 m目标重量
////u第几个瓜 st当前总重  cnt 刀数
//void dfs(int u,double wt,int cnt) {
//	
//	if (wt==m)
//	{
//		ans = min(ans, cnt);
//		return;
//	}
//	if (u >= n)return;
//	if (cnt >= ans)return;
//	if (wt + sum[u] < m)return;//当前的重量再加后面全部的重量都不够m 所以返回
//	if (wt > m)return;
//	
//	dfs(u + 1, wt + a[u], cnt);
//	dfs(u + 1, wt + (a[u] / 2.0), cnt+1);
//	dfs(u + 1, wt, cnt);
//}
//bool cmp(double x, double y)
//{
//	return x > y;
//}
//void solve() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n, cmp);
//	for (int i = n - 1; i >= 0; i--)//后缀和
//	{
//		sum[i] = sum[i + 1] + a[i];
//	}
//	dfs(0, 0, 0);
//	if (ans == INF)ans = -1;
//	cout << ans << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}
