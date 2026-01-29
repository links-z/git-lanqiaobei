//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//#define int long long
//#define endl "\n"
//#define INF 0x3f3f3f3f
//typedef pair<int, int> pii;
//const int N = 1e5 + 10;
//vector<int>edge[N];
//int n, m;
//int w[N];//每一个边的边权
//map<pii, int>id;//边的编号  id[{1,2}]=1;
//bool dfs(int s, int u, int father,int v) { //s起点  v终点 father 上一节点 u当前节点
//	if (u == v)
//	{
//		return true;
//	}
//	for (int i = 0; i < edge[u].size(); i++)
//	{
//		int son = edge[u][i];
//		if (son == father)continue;
//		if (dfs(s, son, u, v))
//		{
//			int ID = id[{u, son}];
//			w[ID]++;
//			return true;
//		}
//	}
//	return false;
//}
//void solve() {
//	cin >> n >> m;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		edge[x].push_back(y);//一条无向边 等价于两条有向边
//		edge[y].push_back(x);
//		id[{x, y}] = id[{y,x}]=i;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		dfs(x, x, -1, y);
//	}
//	int ans = -1;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (w[i] == m)
//		{
//			ans = i + 1;
//			break;
//		}
//	}
//	cout << ans << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}