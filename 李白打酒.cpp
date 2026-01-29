//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//#define endl "\n"
//#define int long long
//#define mod 1000000007
//int n, m;
//int a[105];
//int k = 2, i = 1,flag=0;
//void dfs( int u,int w) {//第u次到店 第w次遇花  当前wt斗酒
//	
//	if (u > n || w > m)return;
//	if (u == n && m - w != k)return;
//	if (w == m && u < n)return;
//	if (k == 0 && u < n && w < m)return;
//	if (u == n && w == m && k == 0&&a[i-1]!=1)
//	{
//		flag = (flag + 1) % mod;
//		return;
//	}
//
//	a[i] = 0;//遇花
//	i++;
//	k--;
//	dfs(u, w + 1);
//	i--;//回溯
//	k++;
//
//	a[i] = 1;//遇酒
//	i++;
//	k *= 2;
//	dfs(u + 1, w);
//	i--;//回溯
//	k /= 2;
//}
//void solve() {
//	cin >> n >> m;
//	dfs(0,0);
//	cout<< flag % mod << endl;
//}
//
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}