////#include<iostream>
////using namespace std;
////const int N = 10 + 20;
////struct plane {
////	int t, d, l;//T 到达时间 d悬停时间  l降落索要时间
////}p[N];
////bool st[N];//判断 当前飞机是否降落
////int n;
//////u表示已有u架飞机降落 
////// time 表示前一家飞机的降落时间
////bool dfs(int u,int time) {
////	if (u >= n) return true;
////	for (int i = 0; i < n; i++)
////	{
////		if (!st[i])
////		{
////			st[i] = true;
////			if (p[i].t + p[i].l < time)
////			{
////				st[i] = false;
////				return false;
////			}
////			int t = max(time, p[i].t) + p[i].l;
////			if (dfs(u + 1, t))
////				return true;
////			st[i] = false;
////		}
////	}
////}
////void solve() {
////	cin >> n;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> p[i].t >> p[i].d >> p[i].l;
////	}
////	if (dfs(0, 0))
////		cout << "YES" << endl;
////	else
////		cout << "NO" << endl;
////}
//////int main() {
//////	solve();
//////}
//#include<iostream>
//using namespace std;
//#define int long long
//#define INF 0x3f3f3f3f
//#define endl "\n"
//const int N = 10+20;
//bool st[N];
//int n;
//struct plane {
//	int t, d, l;//T 时刻到达机场 d可以盘旋d个事件 l 降落所需时间
//}p[N];
////u 已经有u架飞机成功落地 time 上一个飞机的落地时间
//bool dfs(int u,int time) {
//	if (u >= n)
//		return true;
//	//选择第n+1架飞机谁降落 
//	//循环枚举全部可能的下落情况
//	for (int i = 0; i < n; i++)
//	{
//		if (!st[i])
//		{
//			st[i] = true;
//			if (p[i].t + p[i].d < time)
//			{
//				st[i] = false;
//				return false;
//			}
//			int t = max(time, p[i].t) + p[i].l;
//			if (dfs(u + 1, t))
//				return true;
//			st[i] = false;//回溯此时这一层的st[i]
//		}
//	}
//	return false;
//}
//void solve() {
//	
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i].t >> p[i].d >> p[i].l;
//	}
//	if (dfs(0, 0))
//		cout << "YES" << endl;
//	else
//		cout << "NO" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		st[i] = false;
//	}
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 0;
//	cin >> t;
//	while (t--)
//	solve();
//	return 0;
//}