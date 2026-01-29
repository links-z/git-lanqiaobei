//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//#define INF 0x3f3f3f3f
//typedef pair<int, int> pii;//存图的边权
//vector<int>edge[100];
//int max1[100];
//bool st[100];
//int m, n;
//void dfs(int n,int u) {//n表示起点  u当前遍历的点 father 父节点
//	
//	if (edge[u].empty())return;
//	for (int i = 0; i < edge[u].size(); i++)
//	{
//		if (st[edge[u][i]] == false)
//		{
//			st[edge[u][i]] = true;
//			max1[n] = max(edge[u][i], max1[n]);
//			dfs(n,edge[u][i]);
//		}
//		
//	}
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		edge[x].push_back(y);//无边权的加边
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		max1[i] = i;
//	}
//	
//	memset(st, false, sizeof st);
//	for (int i = 1; i <= n; i++)
//	{
//		dfs(i, i);
//		cout << max1[i] << " ";
//		memset(st, false, sizeof (st));
//	}
//	return 0;
//}

