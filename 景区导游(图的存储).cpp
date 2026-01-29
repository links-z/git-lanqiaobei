//#include <iostream>  
//#include <algorithm>  
//#include<vector>
//#include<map>
//using namespace std;
//#define int long long
//#define endl "\n"
//#define INF 0x3f3f3f3f
//typedef pair<int, int> pii;
//const int N = 2e5 + 10;
//map<pii, int>st;//记录从pii({x,y})的距离是多少
//int a[N];
//vector<pii>edge[N];//第一个int 终点 第二个 int x->y 的边权
////s 起点 u当前的位置 father 上一个节点（避免死循环） v 路径终点 sum 从s到u的路线总和
//bool dfs(int s,int u,int father,int v,int sum) {
//	if (u == v)
//	{
//		st[{s, v}] = sum;
//		st[{v, s}] = sum;
//		return true;//求得是s-v的距离是多少
//	}
//	for (int i = 0; i < edge[u].size(); i++)//edge[u]当前点的邻点
//	{
//		int son = edge[u][i].first; //表示u->i(i就是first)
//		if (son == father)
//			continue;
//		int w = edge[u][i].second;
//		if (dfs(s, son, u, v, sum + w))
//			return true;
//	}
//	return false; 
//}
//void solve() {
//		//图的存储
//		//x->y
//		//edge[x].push_back(y); x->y的一条边
//		//x - y(无向边 就存两个有向边)
//		//edge[x].push_back(y);
//		//edge[y].push_back(x);
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int x, y, t;
//		cin >> x >> y >> t;
//		//存图 无向边
//		edge[x].push_back({ y,t });//表示x->y的边权是 4
//		edge[y].push_back({ x,t });//双向边可互通存两次
//	}
//	for (int i = 0; i < k; i++)
//	{
//		cin >> a[i];
//	}
//	int ans = 0;
//	//完整路线的总花费
//	for (int i = 0; i < k - 1; i++)
//	{
//		dfs(a[i], a[i], -1, a[i + 1], 0);//求a[i]->a[i+1]的距离是多少
//		ans += st[{a[i], a[i + 1]}];//求的起点到终点的全部距离 ans
//	}
//	for (int i = 0; i < k; i++)
//	{
//		int tmp = ans;
//		if (i == 0)//如果是第一个就减去第一个到第二个距离
//			tmp -= st[{a[i], a[i + 1]}];
//		else if (i == k - 1)
//			tmp -= st[{a[i - 1], a[i]}];//最后一个减去前一个到最后一个的距离
//		else {
//			tmp -= st[{a[i - 1], a[i]}];
//			tmp -= st[{a[i], a[i + 1]}];
//			dfs(a[i - 1], a[i - 1], -1, a[i + 1], 0);
//			tmp += st[{a[i - 1], a[i + 1]}];
//		}
//		cout << tmp << endl;//每次输出减去 第i个 的花费
//	}
//
//}
// signed main()
//{
//	 ios::sync_with_stdio(0);
//	 cin.tie(0);
//	 cout.tie(0);
//	 solve();
//	 return 0;
//}