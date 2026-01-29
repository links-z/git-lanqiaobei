//#include<iostream>
//using namespace std;
//#include<sstream>
//#include<algorithm>
//#define endl "\n"
//#define INF 0x3f3f3f3f
//int n,m;
//const int N = 1000;
//int map[N][N];
//bool st[N][N];
//int cx[4] = { 0,-1,0,1 };
//int cy[4] = { -1,0,1,0 };
//int ans = INF;
//void dfs(int x,int y,int cnt,int x1,int y1) {
//	if (x <= 0 || y <= 0 || x > m || y >n) return;
//	if (cnt >= ans) return;
//	if (x == x1&& y == y1)
//	{
//		ans = min(ans,cnt);
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (map[x + cx[i]][y + cy[i]] == 1&&st[x + cx[i]][y + cy[i]]==0)
//		{
//			st[x][y] = 1;
//			dfs(x + cx[i], y + cy[i],cnt+1,x1,y1);
//			st[x][y] = 0;
//		}
//	}
//}
//void solve() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> map[i][j];
//		}
//	}
//	int x, y, x1, y1;
//	cin >> x >> y >> x1 >> y1;
//	dfs(x,y,0,x1,y1);
//	if (ans == INF)
//		cout << "-1";
//	else
//		cout << ans;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}