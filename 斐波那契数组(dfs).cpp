//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//#define int long long
//#define INF 0x3f3f3f3f
//#define endl "\n"
//const int N = 1e5 + 10;
//int a[N];
//int n;
//int ans1 = INF;
//void dfs(int u,int ans) {// u当前位置 ans修改次数
//	if (ans > ans1)return;
//	if (u >= n-1)
//	{
//		ans1 = min(ans,ans1);
//		return;
//	}
//	if (u == 0)
//	{
//		if (a[u] == a[u + 1])dfs(u + 1, ans);
//		else { 
//			int tmp = a[u + 1];
//			a[u + 1] = a[u];
//			dfs(u + 1, ans + 1);
//			a[u + 1] = tmp;
//			int tmp2 = a[u];
//			a[u] = a[u + 1];
//			dfs(u + 1, ans + 1);
//			a[u] = tmp2;
//		}
//	}
//	else if(a[u] + a[u - 1] == a[u + 1]) dfs(u + 1, ans);
//	else {
//		int tmp1 = a[u + 1];
//		a[u + 1] = a[u] + a[u - 1]; 
//		dfs(u + 1, ans + 1);
//		a[u + 1] = tmp1;
//	}
//	
//}
//void solve() {
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	dfs(0, 0);
//	cout << ans1 << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}